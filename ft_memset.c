/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 08:29:16 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 09:11:13 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_char;

	b_char = (unsigned char *)b;
	if (b == NULL)
		return (NULL);
	while (*b_char && len > 0)
	{
		*b_char = c;
		b_char++;
		len--;
	}
	return (b);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[50] = "What is memset really doing?.";
//     printf("\nBefore memset(): %s\n", str);	
//     // Fill 8 characters starting from str[13] with '.'
//     memset(str + 14, '.', 8*sizeof(char));
//     printf("After memset():  %s", str);
//     char ftr[50] = "What is memset really doing?.";
//     printf("\nBefore ft_memset(): %s\n", ftr);	
// 	ft_memset(ftr + 14, '.', 8*sizeof(char));
// 	printf("After memset():  %s", ftr);
//     return 0;
// }