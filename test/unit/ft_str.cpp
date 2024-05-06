#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_strtrim, Checkmandatory)
{
	char	*ans2 = ft_strtrim("xhello world!x", "x");
	EXPECT_STREQ(ans2, "hello world!");

	ans2 = ft_strtrim("hello world!x", "x");
	EXPECT_STREQ(ans2, "hello world!");

	ans2 = ft_strtrim("hello world!", "x");
	EXPECT_STREQ(ans2, "hello world!");

	ans2 = ft_strtrim("hello world!", "");
	EXPECT_STREQ(ans2, "hello world!");

	ans2 = ft_strtrim("", "x");
	EXPECT_STREQ(ans2, "");

	ans2 = ft_strtrim("", "");
	EXPECT_STREQ(ans2, "");
}
