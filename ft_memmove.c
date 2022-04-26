/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:21:18 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 10:14:48 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_char;
	unsigned char	*src_char;

	dst_char = (unsigned char *)dst;
	src_char = (unsigned char *)src;
	if (dst == NULL)
		return (NULL);
	while (*dst_char && len && *src_char > 0)
	{
		*dst_char = *src_char;
		dst_char++;
		src_char++;
		len--;
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[50] = "What is memmove really doing?.";
// 	char str2[50] = "It's replacing something!";
//     printf("\nBefore memmove(): %s\n", str);	
//     // Filling the old str with the new str
//     memmove(str, str2, 25*sizeof(char));
//     printf("After memset():  %s", str);
//     char ftr[50] = "What is ft_memmove really doing?.";
//     printf("\nBefore ft_memmove(): %s\n", ftr);	
// 	ft_memmove(ftr, str2, 25*sizeof(char));
// 	printf("After memset():  %s", ftr);
//     return 0;
// }