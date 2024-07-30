#include "_public.h"
#include "gtest/gtest.h"

TEST(StringToolsToUpperTest, toupper1)
{
    string str = "hello";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_EQ(stringTools::toupper(str), "HELLO");
}

TEST(StringToolsTest, toupper2)
{
    char str[] = "hello";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_STREQ(stringTools::toupper(str), "HELLO");
}

TEST(StringToolsToUpperTest, tolower1)
{
    string str = "HELLO";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_EQ(stringTools::tolower(str), "hello");
}

TEST(StringToolsTest, tolower2)
{
    char str[] = "HELLO";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_STREQ(stringTools::tolower(str), "hello");
}
