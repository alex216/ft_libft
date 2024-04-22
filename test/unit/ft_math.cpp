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
