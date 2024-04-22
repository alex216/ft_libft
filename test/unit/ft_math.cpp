#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_min, two_arg)
{
	int	ans2 = ft_min(2, 42, 43);
	EXPECT_EQ(ans2, 42);

	// char	*ans3 = ft_strjooin(3, "hello", " world", "!");
	// EXPECT_STREQ(ans3, "hello world!");
}
