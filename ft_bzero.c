/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 09:47:22 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 15:53:20 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	char	*s_char;

	s_char = (char *)s;
	while (n > 0)
	{
		*s_char = '\0';
		s_char++;
		n--;
	}
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char str[50] = "What is bzero really doing?.";
//     printf("\nBefore bzero(): %s\n", str);	
//     // Fill 8 characters starting from str[13] with '.'
//     bzero(str + 10, 8*sizeof(char));
//     printf("After bzero():  %s", str);
//     char ftr[50] = "What is bzero really doing?.";
//     printf("\nBefore ft_bzero(): %s\n", ftr);	
// 	ft_bzero(ftr + 10, 8*sizeof(char));
// 	printf("After ft_bzero():  %s", ftr);
//     return 0;
// }