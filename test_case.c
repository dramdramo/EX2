#include "string.h"
#include <gtest/gtest.h>
TEST(Stringlength1,MyTEst)
{
	char test[]  = "mytest1\0";
        EXPECT_EQ(7, my_strlen(test) );
}
TEST(Stringlength2,MyTEst)
{
        char test2[] = "orulol\0";
        EXPECT_EQ(6, my_strlen(test2) );
}

TEST(Stringlength3,MyTEst)
{
        char test3[] = "\0";
        EXPECT_EQ(0, my_strlen(test3) );
}

TEST(Stringcopy1,MyTEst)
{
        char s[] = "strings\0";
	char d[] = "acfgtgd24324\0";
	mystrcpy(s,d);
        ASSERT_STREQ( "strings24324", d);
}

TEST(UpperCase,MyTEst)
{
        char s[] = "strOOings\0";
        EXPECT_EQ(7 , str2upper(s) );
}

