import json
from pathlib import Path


def reformat_license_header(raw):
    new = ["/*"]
    new.extend(" * " + line.rstrip() if line.strip() else " *" for line in raw)
    new.extend([" */", ""])
    return new


header_f = open('res/license_header.txt')
license_header = reformat_license_header(header_f.readlines())
header_f.close()


def write_license(f):
    for line in license_header:
        f.write(line)
        f.write('\n')


def to_class_name(string):
    return ''.join(s.capitalize() for s in string.split('_'))


def generate_header(entry):
    name = entry[10:]
    cls_name = to_class_name(name) + "Item"
    fname = name + "_item.h"
    f = open("generated/" + fname, "w+")

    write_license(f)
    f.write("#pragma once\n")
    f.write("\n")
    f.write("#include \"item.h\"\n")
    f.write("\n")
    f.write("class " + cls_name + " : public Item {\n")
    f.write(" public:\n")
    f.write("  " + cls_name + "();\n")
    f.write("  ~" + cls_name + "() override;\n")
    f.write("\n")
    f.write(" public:\n")
    f.write("  [[nodiscard]] int getID() const override;\n")
    f.write("  [[nodiscard]] std::shared_ptr<Item> clone() const override;\n")
    f.write("};\n")

    f.close()


def generate_source(entry, data):
    name = entry[10:]
    cls_name = to_class_name(name) + "Item"
    fname = name + "_item.cpp"
    f = open("generated/" + fname, "w+")

    write_license(f)
    f.write("#include \"" + name + "_item.h\"\n")
    f.write("\n")
    f.write(cls_name + "::" + cls_name + "() = default;\n")
    f.write(cls_name + "::~" + cls_name + "() = default;\n")
    f.write("\n")
    f.write("int " + cls_name + "::getID() const {\n")
    f.write("  return " + str(data["entries"][entry]["protocol_id"]) + ";\n")
    f.write("}\n")
    f.write("\n")
    f.write("std::shared_ptr<Item> " + cls_name + "::clone() const {\n")
    f.write("  return std::make_shared<" + cls_name + ">();\n")
    f.write("}\n")

    f.close()


def generate_registry(data):
    f = open("generated/item_registry.h", "w+")

    write_license(f)
    f.write("#pragma once\n")
    f.write("\n")
    f.write("#include <memory>\n")
    f.write("#include <vector>\n")
    f.write("\n")
    f.write("#include \"item.h\"\n")
    f.write("\n")
    f.write("class ItemRegistry {\n")
    f.write(" public:\n")
    f.write("  static void init();\n")
    f.write("  static std::shared_ptr<Item> fromID(int);\n")
    f.write("  static std::shared_ptr<Item> newInstanceFromID(int);\n")
    f.write("\n")
    f.write(" private:\n")
    f.write("  static std::vector<std::shared_ptr<Item>> registry;\n")
    f.write("};\n")

    f.close()

    f = open("generated/item_registry.cpp", "w+")

    write_license(f)
    f.write("#include \"item_registry.h\"\n")
    f.write("\n")
    for itemId in data["entries"]:
        f.write("#include \"")
        f.write(itemId[10:])
        f.write("_item.h\"\n")
    f.write("\n")
    f.write("void ItemRegistry::init() {\n")

    total_items = 0
    for itemId in data["entries"]:
        total_items = max(data["entries"][itemId]["protocol_id"] + 1, total_items)

    f.write("  registry.resize(")
    f.write(str(total_items))
    f.write(");\n")

    for i in range(total_items):
        f.write("\n")
        f.write("  { // ID: ")
        f.write(str(i))
        f.write("\n")
        for itemId in data["entries"]:
            if data["entries"][itemId]["protocol_id"] == i:
                cls = to_class_name(itemId[10:] + "_item")
                f.write("    registry[")
                f.write(str(i))
                f.write("] = std::make_shared<")
                f.write(cls)
                f.write(">();\n")
                break
        f.write("  }\n")
    f.write("}\n")
    f.write("\n")
    f.write("std::shared_ptr<Item> ItemRegistry::fromID(int id) {\n")
    f.write("  if (id < 0 || id >= registry.size()) {\n")
    f.write("    return registry[0];\n")
    f.write("  }\n")
    f.write("  return registry[id];\n")
    f.write("}\n")
    f.write("\n")
    f.write("std::shared_ptr<Item> ItemRegistry::newInstanceFromID(int id) {\n")
    f.write("  return fromID(id)->clone();\n")
    f.write("}\n")
    f.write("\n")
    f.write("std::vector<std::shared_ptr<Item>> ItemRegistry::registry;\n")


if __name__ == "__main__":
    Path('generated').mkdir(parents=True, exist_ok=True)

    d = json.load(open("res/registries.json"))["minecraft:item"]

    print("Generating item files...")
    print("Generating item registry...")
    generate_registry(d)
    for e in d["entries"]:
        print("Generating " + e)
        generate_header(e)
        generate_source(e, d)
