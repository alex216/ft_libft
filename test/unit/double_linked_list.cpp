#include "gtest/gtest.h"

extern "C"
{
#include "libft.h"
#include "ft_printf.h"
#include "get_next_line.h"
}

TEST(ft_dl_lstadd_back_with_lst, size_1)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	*lst_pp = NULL;
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_back_with_lst(lst_pp, node1);

	EXPECT_EQ((*lst_pp), node1);
	EXPECT_EQ((*lst_pp)->prev_p, node1->next_p);
	EXPECT_EQ((*lst_pp)->prev_p, node1->prev_p);
	EXPECT_EQ((*lst_pp)->next_p, node1->next_p);
	EXPECT_EQ((*lst_pp)->next_p, node1->prev_p);
}

TEST(ft_dl_lstadd_back_with_lst, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	*lst_pp = NULL;
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));

	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	ft_dl_lstadd_back_with_lst(lst_pp, node2);

	EXPECT_EQ((*lst_pp)->prev_p, node1->prev_p);
	EXPECT_EQ((*lst_pp)->prev_p, node2->next_p);
	EXPECT_EQ((*lst_pp)->next_p, node2);
	EXPECT_EQ((*lst_pp)->next_p->prev_p, node1);
	EXPECT_EQ((*lst_pp)->next_p->next_p, node2->next_p);
}

TEST(ft_dl_lstadd_front_with_lst, size_1)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	*lst_pp = NULL;
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_front_with_lst(lst_pp, node1);

	EXPECT_EQ((*lst_pp), node1);
	EXPECT_EQ((*lst_pp)->prev_p, node1->next_p);
	EXPECT_EQ((*lst_pp)->prev_p, node1->prev_p);
	EXPECT_EQ((*lst_pp)->next_p, node1->next_p);
	EXPECT_EQ((*lst_pp)->next_p, node1->prev_p);
}

TEST(ft_dl_lstadd_front_with_lst, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	*lst_pp = NULL;
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));

	ft_dl_lstadd_front_with_lst(lst_pp, node2);
	ft_dl_lstadd_front_with_lst(lst_pp, node1);

	EXPECT_EQ((*lst_pp)->prev_p, node1->prev_p);
	EXPECT_EQ((*lst_pp)->prev_p, node2->next_p);
	EXPECT_EQ((*lst_pp)->next_p, node2);
	EXPECT_EQ((*lst_pp)->next_p->prev_p, node1);
	EXPECT_EQ((*lst_pp)->next_p->next_p, node2->next_p);
}

TEST(ft_dl_lstsize, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));
	
	EXPECT_EQ(ft_dl_lstsize(NULL), 0);

	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	EXPECT_EQ(ft_dl_lstsize(*lst_pp), 1);

	ft_dl_lstadd_back_with_lst(lst_pp, node2);
	EXPECT_EQ(ft_dl_lstsize((*lst_pp)->next_p), 1);
	EXPECT_EQ(ft_dl_lstsize(*lst_pp), 2);
}

TEST(ft_dl_lstlast, size_2)
{
	t_lst	**lst_pp = (t_lst **)malloc(sizeof(t_lst **));
	t_lst	*node1 = (t_lst *)malloc(sizeof(t_lst));
	t_lst	*node2 = (t_lst *)malloc(sizeof(t_lst));
	
	ft_dl_lstadd_back_with_lst(lst_pp, node1);
	EXPECT_EQ(ft_dl_lstlast(*lst_pp), node1);

	ft_dl_lstadd_back_with_lst(lst_pp, node2);
	EXPECT_EQ(ft_dl_lstlast(*lst_pp), node2);
}
