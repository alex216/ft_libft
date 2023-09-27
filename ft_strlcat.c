/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yliu <yliu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:47:18 by yliu              #+#    #+#             */
/*   Updated: 2023/09/26 17:47:03 by yliu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/// move this to top
 #include <string.h>
 size_t	ft_strlen(const char *str)
 {
 	size_t	i;

 	i = 0;
 	while (*(str + i) != '\0')
 	{
 		i++;
 	}
 	return (i);
 }
 size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	d_i;

	d_i = 0;
	while (*dst != '\0' && d_i < dstsize)
	{
		d_i++;
		dst++;
	}
	src_len = ft_strlcpy(dst, src, dstsize - d_i);
	return (d_i + src_len);
}

 #include <stdio.h>
  #include <string.h>
  #include <errno.h>

  int	main(void)
  {
  	puts("NULL -> NULL both crash");
  	char	*s1 = NULL;
  	char	*s2 = NULL;
  	printf("%zu\n",strlcat(s1, s2, 3));
  	// char	*s11 = NULL;
  	// char	*s21 = NULL;
  	// printf("%zu\n",ft_strlcat(s11, s21, 3));

  	puts("\nNULL -> xx both crash ");
  	// char	s3[20] = "xx";
  	// char	*s4 = NULL;
  	// printf("%zu\n",strlcat(s3, s4, 1));
  	char	s31[20] = "xx";
  	char	*s41 = NULL;
  	printf("%zu\n",strlcat(s31, s41, 3));

  	puts("0 -> NULL both crash");
  	// char	*s5 = NULL;
  	// char	*s6 = "";
  	// printf("%zu\n",strlcat(s5, s6, 3));
  	// char	*s51 = NULL;
  	// char	*s61 = "";
  	// printf("%zu\n",strlcat(s51, s61, 1));

  	puts("0 -> 0 null return");
  	char	s7[1] = "";
  	char	*s8 = "";
  	printf("%zu\n",strlcat(s7, s8, 1));
  	char	s71[1] = "";
  	char	*s81 = "";
  	printf("%zu\n",ft_strlcat(s71, s81, 1));

  	puts("str -> str+1 undefined behavior");
  	// char	s10[20] = "12345xxxxxxxxxxxxxxx";
  	// char	*s9 = s10+1 ;
  	// printf("%zu\n",strlcat(s9, s10, 5));
 	// for (int i = 0; i < 4; i++)
 	// 	printf("%c |", s10[i]);

  	char	s1z[20] = "12345xxxxxxxxxxxxxxx";
  	char	*s91 = s1z + 1;
  	printf("%zu\n",ft_strlcat(s91, s1z, 5));
 	for (int i = 0; i < 4; i++)
 		printf("%c |", s1z[i]);


  	puts("\nstr -> str - 1 undefined behavior, crash both");
  	// char	s111[20] = "12345xxxxxxxxxxxxxxx";
  	// char	*s121 = s111+1 ;
  	// printf("%zu\n",strlcat(s121, s111, 5));

  	// char	s1y[20] = "12345xxxxxxxxxxxxxxx";
  	// char	*s1x = s1y+1 ;
  	// printf("%zu\n",ft_strlcat(s1x, s1y, 5));

  	puts("src -> dst ok...");
  	int	n = 3;
  	char	dst[10] = "000000000";
  	char	*src = "Hello";
  	strlcat(dst, src, n);
 	printf("%s\n", dst);

  	char	dst1[10] = "000000000";
  	char	*src1 = "hello";
 	ft_strlcat(dst1, src1, n);
  	printf("%s\n", dst1);
  }
