#ifndef RYML_SINGLE_HEADER
#include "c4/yml/std/std.hpp"
#include "c4/yml/parse.hpp"
#include "c4/yml/emit.hpp"
#include <c4/format.hpp>
#include <c4/yml/detail/checks.hpp>
#include <c4/yml/detail/print.hpp>
#endif

#include "./test_case.hpp"

#include <gtest/gtest.h>

#if defined(_MSC_VER)
#   pragma warning(push)
#   pragma warning(disable: 4389) // signed/unsigned mismatch
#elif defined(__clang__)
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"
#elif defined(__GNUC__)
#   pragma GCC diagnostic push
#endif

namespace c4 {
namespace yml {

TEST(general, parsing)
{
    auto tree = parse_in_arena("{foo: 1}");

    char cmpbuf[128] = {0};
    substr cmp(cmpbuf);
    size_t ret;

    ret = cat(cmp, tree["foo"].val());
    EXPECT_EQ(cmp.first(ret), "1");

    ret = cat(cmp, tree["foo"].key());
    EXPECT_EQ(cmp.first(ret), "foo");
}

TEST(general, emitting)
{
    std::string cmpbuf;

    Tree tree;
    auto r = tree.rootref();

    r |= MAP;  // this is needed to make the root a map

    r["foo"] = "1"; // ryml works only with strings.
    // Note that the tree will be __pointing__ at the
    // strings "foo" and "1" used here. You need
    // to make sure they have at least the same
    // lifetime as the tree.

    auto s = r["seq"]; // does not change the tree until s is written to.
    s |= SEQ;
    r["seq"].append_child() = "bar0"; // value of this child is now __pointing__ at "bar0"
    r["seq"].append_child() = "bar1";
    r["seq"].append_child() = "bar2";

    //print_tree(tree);

    // emit to stdout (can also emit to FILE* or ryml::span)
    emitrs(tree, &cmpbuf);
    const char* exp = R"(foo: 1
seq:
  - bar0
  - bar1
  - bar2
)";
    EXPECT_EQ(cmpbuf, exp);

    // serializing: using operator<< instead of operator=
    // will make the tree serialize the value into a char
    // arena inside the tree. This arena can be reserved at will.
    int ch3 = 33, ch4 = 44;
    s.append_child() << ch3;
    s.append_child() << ch4;

    {
        std::string tmp = "child5";
        s.append_child() << tmp;   // requires #include <c4/yml/std/string.hpp>
        // now tmp can go safely out of scope, as it was
        // serialized to the tree's internal string arena
        // Note the include highlighted above is required so that ryml
        // knows how to turn an std::string into a c4::csubstr/c4::substr.
    }

    emitrs(tree, &cmpbuf);
    exp = R"(foo: 1
seq:
  - bar0
  - bar1
  - bar2
  - 33
  - 44
  - child5
)";
    EXPECT_EQ(cmpbuf, exp);

    // to serialize keys:
    int k=66;
    r.append_child() << key(k) << 7;

    emitrs(tree, &cmpbuf);
    exp = R"(foo: 1
seq:
  - bar0
  - bar1
  - bar2
  - 33
  - 44
  - child5
66: 7
)";
    EXPECT_EQ(cmpbuf, exp);
}

TEST(general, map_to_root)
{
    std::string cmpbuf; const char *exp;
    std::map<std::string, int> m({{"bar", 2}, {"foo", 1}});
    Tree t;
    t.rootref() << m;

    emitrs(t, &cmpbuf);
    exp = R"(bar: 2
foo: 1
)";
    EXPECT_EQ(cmpbuf, exp);

    t["foo"] << 10;
    t["bar"] << 20;

    m.clear();
    t.rootref() >> m;

    EXPECT_EQ(m["foo"], 10);
    EXPECT_EQ(m["bar"], 20);
}

TEST(general, print_tree)
{
    const char yaml[] = R"(
a:
  b: bval
  c:
    d:
      - e
      - d
      - f: fval
        g: gval
        h:
          -
            x: a
            y: b
          -
            z: c
            u:
)";
    Tree t = parse_in_arena(yaml);
    print_tree(t); // to make sure this is covered too
}

TEST(general, numbers)
{
    const char yaml[] = R"(- -1
- -1.0
- +1.0
- 1e-2
- 1e+2
)";
    Tree t = parse_in_arena(yaml);
    auto s = emitrs<std::string>(t);
    EXPECT_EQ(s, std::string(yaml));
}

// github issue 29: https://github.com/biojppm/rapidyaml/issues/29
TEST(general, newlines_on_maps_nested_in_seqs)
{
    const char yaml[] = R"(enemy:
- actors:
  - {name: Enemy_Bokoblin_Junior, value: 4.0}
  - {name: Enemy_Bokoblin_Middle, value: 16.0}
  - {name: Enemy_Bokoblin_Senior, value: 32.0}
  - {name: Enemy_Bokoblin_Dark, value: 48.0}
  species: BokoblinSeries
)";
    std::string expected = R"(enemy:
  - actors:
      - name: Enemy_Bokoblin_Junior
        value: 4.0
      - name: Enemy_Bokoblin_Middle
        value: 16.0
      - name: Enemy_Bokoblin_Senior
        value: 32.0
      - name: Enemy_Bokoblin_Dark
        value: 48.0
    species: BokoblinSeries
)";
    Tree t = parse_in_arena(yaml);
    auto s = emitrs<std::string>(t);
    EXPECT_EQ(expected, s);
}


TEST(general, test_suite_RZT7)
{
    csubstr yaml = R"(
---
Time: 2001-11-23 15:01:42 -5
User: ed
Warning:
  This is an error message
  for the log file
---
Time: 2001-11-23 15:02:31 -5
User: ed
Warning:
  A slightly different error
  message.
---
Date: 2001-11-23 15:03:17 -5
User: ed
Fatal:
  Unknown variable "bar"
Stack:
  - file: TopClass.py
    line: 23
    code: |
      x = MoreObject("345\n")
  - file: MoreClass.py
    line: 58
    code: |-
      foo = bar
)";
    test_check_emit_check(yaml, [](Tree const &t){
        ASSERT_TRUE(t.rootref().is_stream());
        const NodeRef doc0 = t.rootref()[0];
        EXPECT_EQ(doc0["Time"].val(), csubstr("2001-11-23 15:01:42 -5"));
        EXPECT_EQ(doc0["User"].val(), csubstr("ed"));
        EXPECT_EQ(doc0["Warning"].val(), csubstr("This is an error message for the log file"));
        const NodeRef doc1 = t.rootref()[1];
        EXPECT_EQ(doc1["Time"].val(), csubstr("2001-11-23 15:02:31 -5"));
        EXPECT_EQ(doc1["User"].val(), csubstr("ed"));
        EXPECT_EQ(doc1["Warning"].val(), csubstr("A slightly different error message."));
        const NodeRef doc2 = t.rootref()[2];
        EXPECT_EQ(doc2["Date"].val(), csubstr("2001-11-23 15:03:17 -5"));
        EXPECT_EQ(doc2["User"].val(), csubstr("ed"));
        EXPECT_EQ(doc2["Fatal"].val(), csubstr("Unknown variable \"bar\""));
        EXPECT_EQ(doc2["Stack"][0]["file"].val(), csubstr("TopClass.py"));
        EXPECT_EQ(doc2["Stack"][0]["line"].val(), csubstr("23"));
        EXPECT_EQ(doc2["Stack"][0]["code"].val(), csubstr("x = MoreObject(\"345\\n\")\n"));
        EXPECT_EQ(doc2["Stack"][1]["file"].val(), csubstr("MoreClass.py"));
        EXPECT_EQ(doc2["Stack"][1]["line"].val(), csubstr("58"));
        EXPECT_EQ(doc2["Stack"][1]["code"].val(), csubstr("foo = bar"));
    });
}


TEST(general, github_issue_124)
{
    // All these inputs are basically the same.
    // However, the comment was found to confuse the parser in #124.
    csubstr yaml[] = {
        "a:\n  - b\nc: d",
        "a:\n  - b\n\n# ignore me:\nc: d",
        "a:\n  - b\n\n  # ignore me:\nc: d",
        "a:\n  - b\n\n    # ignore me:\nc: d",
        "a:\n  - b\n\n#:\nc: d", // also try with just a ':' in the comment
        "a:\n  - b\n\n# :\nc: d",
        "a:\n  - b\n\n#\nc: d",  // also try with empty comment
    };
    for(csubstr inp : yaml)
    {
        SCOPED_TRACE(inp);
        Tree t = parse_in_arena(inp);
        std::string s = emitrs<std::string>(t);
        // The re-emitted output should not contain the comment.
        EXPECT_EQ(c4::to_csubstr(s), "a:\n  - b\nc: d\n");
    }
}



//-------------------------------------------
// this is needed to use the test case library
Case const* get_case(csubstr /*name*/)
{
    return nullptr;
}

} // namespace yml
} // namespace c4

#if defined(_MSC_VER)
#   pragma warning(pop)
#elif defined(__clang__)
#   pragma clang diagnostic pop
#elif defined(__GNUC__)
#   pragma GCC diagnostic pop
#endif
