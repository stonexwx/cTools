#include "_public.h"
#include "gtest/gtest.h"

TEST(StringToolsToUpperTest, toupper1)
{
    string str = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "china", false);
    EXPECT_EQ(str, "hello china hello china hello china hello china");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsTest, toupper2)
{
    char str[] = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "china", false);
    EXPECT_STREQ(str, "hello china hello china hello china hello china");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsToUpperTest, toupper3)
{
    string str = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "china", true);
    EXPECT_EQ(str, "hello china hello china hello china hello china");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsTest, toupper4)
{
    char str[] = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "china", true);
    EXPECT_STREQ(str, "hello china hello china hello china hello china");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsToUpperTest, toupper5)
{
    string str = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "", false);
    EXPECT_EQ(str, "hello  hello  hello  hello ");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsTest, toupper6)
{
    char str[] = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "", false);
    EXPECT_STREQ(str, "hello  hello  hello  hello ");
    EXPECT_EQ(ret, true);
}

TEST(StringToolsToUpperTest, toupper7)
{
    string str = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "China belongs to the world", true);
    EXPECT_EQ(ret, false);
}

TEST(StringToolsTest, toupper8)
{
    char str[] = "hello world hello world hello world hello world";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    bool ret = stringTools::replacestr(str, "world", "China belongs to the world", true);
    EXPECT_EQ(ret, false);
}