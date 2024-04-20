#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_strlen, zero_size)
{
	const char	*str = NULL;
	EXPECT_EQ(ft_strlen(str), 0);
}

// TEST(ft_dl_lstlast, double_linked_list_lstsize)
// {
// 	const char *envp[] = {"PATH=/bin:/usr/bin", NULL};
// 	const char *cmd = "/bin/cmd42";
// 	const char *err_msg = "bash: /bin/cmd42: No such file or directory";
//
// 	EXPECT_EXIT(return_entire_path(cmd, envp), ::testing::ExitedWithCode(127), err_msg);
// }
