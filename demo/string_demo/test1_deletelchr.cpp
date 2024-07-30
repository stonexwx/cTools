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
