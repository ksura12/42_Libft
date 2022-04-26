/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 10:50:20 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 12:46:52 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst_char;
	const char	*src_char;

	dst_char = (char *)dst;
	src_char = (const char *)src;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (*dst_char && *src_char && n > 0)
	{
		*dst_char = *src_char;
		dst_char++;
		src_char++;
		n--;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     // char str[50] = "What is memmcpy really doing?.";
// 	char str2[50] = "It's replacing something!";
// 	char ftr[50] = "What is ft_memcpy really doing?.";
// 	printf("%s\n", ftr);
// 	ft_memcpy(ftr, str2, 9*sizeof(char));
// 	printf("%s\n", ftr);
// }