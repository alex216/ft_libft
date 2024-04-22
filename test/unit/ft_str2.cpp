#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_strjooin, two_arg)
{
	char	*ans2 = ft_strjooin(2, "hello", " world!");
	EXPECT_STREQ(ans2, "hello world!");

	char	*ans3 = ft_strjooin(3, "hello", " world", "!");
	EXPECT_STREQ(ans3, "hello world!");
}
