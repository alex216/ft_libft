#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_dl_lstsize, null)
{
	int ans = ft_dl_lstsize(NULL);
	EXPECT_EQ(ans, 0);
}

TEST(ft_dl_lstsize, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	ft_dl_lstadd_back_with_lst(lst_pp, node2);
	EXPECT_EQ(ft_dl_lstsize(*lst_pp), 2);
}

TEST(ft_dl_lstlast, size_1)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	EXPECT_EQ(ft_dl_lstlast(*lst_pp), node1);
}

TEST(ft_dl_lstlast, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	ft_dl_lstadd_back_with_lst(lst_pp, node2);
	EXPECT_EQ(ft_dl_lstlast(*lst_pp), node2);
}
