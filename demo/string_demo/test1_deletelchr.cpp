#include "_public.h"
#include "gtest/gtest.h"

TEST(StringToolsTest, BasicAssertions1)
{
    string str = "   hello";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_EQ(stringTools::deletelchr(str), "hello");
}

TEST(StringToolsTest, BasicAssertions2)
{
    char str[] = "!!!!hello";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_STREQ(stringTools::deletelchr(str, '!'), "hello");
}

TEST(StringToolsTest, BasicAssertions3)
{
    string str = "   hello     ";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_EQ(stringTools::deleterchr(str), "   hello");
}

TEST(StringToolsTest, BasicAssertions4)
{
    char str[] = "!!!!hello!!!!!";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_STREQ(stringTools::deleterchr(str, '!'), "!!!!hello");
}

TEST(StringToolsTest, deletelrchr1)
{
    string str = "   hello     ";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_EQ(stringTools::deletelrchr(str), "hello");
}

TEST(StringToolsTest, deletelrchr2)
{
    char str[] = "!!!!hello!!!!!";
    // EXPECT_EQ() 用于验证两个表达式的相等性。
    EXPECT_STREQ(stringTools::deletelrchr(str, '!'), "hello");
}