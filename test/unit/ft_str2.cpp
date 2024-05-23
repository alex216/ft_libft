#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_strjooin, checking_2_or_3_arg)
{
	char	*ans2 = ft_strjooin(2, "hello", " world!");
	EXPECT_STREQ(ans2, "hello world!");

	char	*ans3 = ft_strjooin(3, "hello", " world", "!");
	EXPECT_STREQ(ans3, "hello world!");
}

TEST(ft_print_error, normal)
{
	int	ans = ft_print_error("error");
	EXPECT_EQ(ans, 1);
}
