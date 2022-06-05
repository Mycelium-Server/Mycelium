#ifndef MYCELIUM_JSON_H
#define MYCELIUM_JSON_H

#include <string>
#include <map>
#include <vector>
#include <memory>
#include <regex>
#include "ByteBuffer.h"

#define JSON_NUMBER(x) (*reinterpret_cast<JSON_Number*>(x.get()))
#define JSON_STRING(x) (*reinterpret_cast<JSON_String*>(x.get()))
#define JSON_BOOLEAN(x) (*reinterpret_cast<JSON_Boolean*>(x.get()))
#define JSON_ARRAY(x) (*reinterpret_cast<JSON_Array*>(x.get()))
#define JSON_OBJECT(x) (*reinterpret_cast<JSON_Object*>(x.get()))
#define JSON_NULL(x) (*reinterpret_cast<JSON_Null*>(x.get()))

class JSON_value {};
typedef std::shared_ptr<JSON_value> JSON;

class JSON_Object : public JSON_value {
public:
    std::map<std::string, std::shared_ptr<JSON_value>> elements;
    JSON operator[](std::string name) {
        if(!elements.contains(name)) return nullptr;
        return elements[name];
    }
};

class JSON_Number : public JSON_value {
public:
    union {
        double d;
        int64_t ll;
    };
    JSON_Number() { ll = 0; d = 0; }
};

class JSON_String : public JSON_value {
public:
    std::string value;

};

class JSON_Boolean : public JSON_value {
public:
    bool value = false;

};

class JSON_Array : public JSON_value {
public:
    std::vector<std::shared_ptr<JSON_value>> elements;

};

class JSON_Null : public JSON_value {};

std::shared_ptr<JSON_value> read_json(ByteBuffer& buf) {
    buf.discard({' ', '\n'});
    char d = (char)buf.readByte();
    if(d == '{') {
        JSON_Object object;
        while(true) {
            buf.discard({' ', '\n'});
            if (buf.readByte() != '"') {
                fprintf(stderr, "read_json:%d: expected `\"', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
                return std::make_shared<JSON_Null>();
            }
            std::string name;
            while (buf.readByte() != '"') {
                name += (char) buf.bytes[buf.position - 1];
            }
            buf.discard({' ', '\n'});
            if (buf.readByte() != ':') {
                fprintf(stderr, "read_json:%d: expected `:', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
                return std::make_shared<JSON_Null>();
            }
            object.elements[name] = read_json(buf);
            buf.discard({' ', '\n'});
            char c = (char)buf.readByte();
            if(c == ',') continue;
            if(c == '}') return std::make_shared<JSON_Object>(object);
            fprintf(stderr, "read_json:%d: expected `,' or `}', got `%c'\n", __LINE__, c);
            return std::make_shared<JSON_Null>();
        }
    }
    if(d == '"') {
        std::vector<char> chars;
        while (buf.readByte() != '"' || buf.bytes[buf.position-2] == '\\') {
            chars.push_back(buf.bytes[buf.position - 1]);
        }
        JSON_String result;
        result.value = std::string(chars.begin(), chars.end());
        result.value = std::regex_replace(result.value, std::regex(R"(\\\n)"), "\n");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\r)"), "\r");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\a)"), "\a");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\b)"), "\b");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\f)"), "\f");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\t)"), "\t");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\v)"), "\v");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\')"), "'");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\\)"), "\\");
        result.value = std::regex_replace(result.value, std::regex(R"(\\\")"), "\"");
        return std::make_shared<JSON_String>(result);
    }
    if(std::isdigit(d) || d == '-') {
        JSON_Number number;
        std::string str;
        bool is_neg = (d == '-');
        if(d != '-') str += d;
        bool is_double = false;
        while(std::isdigit(
                d = (char)buf.readByte()) || d == '.') {
            str += d;
            if(d == '.') {
                if(is_double) {
                    fprintf(stderr, "read_json:%d: unexpected `.'\n", __LINE__);
                    return std::make_shared<JSON_Null>();
                }
                is_double = true;
            }
        }
        if(buf.bytes[buf.position-1] == '.') {
            fprintf(stderr, "read_json:%d: unexpected `.'\n", __LINE__);
            return std::make_shared<JSON_Null>();
        }
        buf.position--;
        if(d == 'F' || d == 'f' || d == 'd' || d == 'D') {
            is_double = true;
            buf.readByte();
        }
        if(is_double) {
            number.d = atof(str.c_str());
            if(is_neg) number.d = -number.d;
        } else {
            number.ll = atoll(str.c_str());
            if(is_neg) number.ll = -number.ll;
        }
        return std::make_shared<JSON_Number>(number);
    }
    if(d == 't') {
        if(buf.readByte() != 'r') {
            fprintf(stderr, "read_json:%d: expected `r', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'u') {
            fprintf(stderr, "read_json:%d: expected `u', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'e') {
            fprintf(stderr, "read_json:%d: expected `e', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        JSON_Boolean boolean;
        boolean.value = true;
        return std::make_shared<JSON_Boolean>(boolean);
    }
    if(d == 'f') {
        if(buf.readByte() != 'a') {
            fprintf(stderr, "read_json:%d: expected `a', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'l') {
            fprintf(stderr, "read_json:%d: expected `l', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 's') {
            fprintf(stderr, "read_json:%d: expected `s', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'e') {
            fprintf(stderr, "read_json:%d: expected `e', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        JSON_Boolean boolean;
        boolean.value = true;
        return std::make_shared<JSON_Boolean>(boolean);
    }
    if(d == '[') {
        JSON_Array array;
        while(true) {
            array.elements.push_back(read_json(buf));
            buf.discard({' ', '\n'});
            char next = (char)buf.readByte();
            if(next == ',') continue;
            if(next == ']') return std::make_shared<JSON_Array>(array);
            fprintf(stderr, "read_json:%d: expected `,' or `]', got `%c'\n", __LINE__, next);
            return std::make_shared<JSON_Null>();
        }
    }
    if(d == 'n') {
        if(buf.readByte() != 'u') {
            fprintf(stderr, "read_json:%d: expected `u', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'l') {
            fprintf(stderr, "read_json:%d: expected `l', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        if(buf.readByte() != 'l') {
            fprintf(stderr, "read_json:%d: expected `l', got `%c'\n", __LINE__, buf.bytes[buf.position - 1]);
            return std::make_shared<JSON_Null>();
        }
        return std::make_shared<JSON_Null>();
    }
    fprintf(stderr, "read_json:%d: unexpected `%c'\n", __LINE__, d);
    return std::make_shared<JSON_Null>();
}

std::shared_ptr<JSON_value> read_json(const std::string& str) {
    ByteBuffer buf(str);
    return read_json(buf);
}

#endif //MYCELIUM_JSON_H
