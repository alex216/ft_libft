#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_min, check_min)
{
	int	ans2 = ft_min(2, 42, 43);
	EXPECT_EQ(ans2, 42);

	int	ans3 = ft_min(3, 24, 42, 43);
	EXPECT_EQ(ans3, 24);
}

TEST(ft_pow, normal)
{
	int	ans = ft_pow(2, 3);
	EXPECT_EQ(ans, 8);

	int	ans2 = ft_pow(3, 3);
	EXPECT_EQ(ans2, 27);

	int	ans3 = ft_pow(3, 0);
	EXPECT_EQ(ans3, 1);
}

TEST(ft_hexstr_2_decimal, normal)
{
	int	ans = ft_hexstr_2_decimal("ff");
	EXPECT_EQ(ans, 255);

	int	ans2 = ft_hexstr_2_decimal("1");
	EXPECT_EQ(ans2, 1);

	int	ans3 = ft_hexstr_2_decimal("0");
	EXPECT_EQ(ans3, 0);

	int	ans4 = ft_hexstr_2_decimal("810202");
	EXPECT_EQ(ans4, 8454658);

	int	ans5 = ft_hexstr_2_decimal("FFFFFF");
	EXPECT_EQ(ans5, 16777215);
}
