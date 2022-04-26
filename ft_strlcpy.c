/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 12:45:09 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 14:54:41 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	pos;

	pos = 0;
	if (dstsize > 0)
	{
		while (*(src + pos) != '\0')
		{
			if (pos == (int)dstsize)
			{
				pos--;
				break ;
			}
			*(dst + pos) = *(src + pos);
			pos++;
		}
	}
	*(dst + pos) = '\0';
	while (*(src + pos) != '\0')
		pos++;
	return (pos);
}

// #include <stdio.h>

// void test(int size)
// {
//     char string[] = "Whats up, Lamaaaaaaaa";
//     char buffer[19];
//     int len;

//     len = ft_strlcpy(buffer,string,size);

//     printf("Copied '%s' into '%s', length %d\n",
//             string,
//             buffer,
//             len
//           );
// }

// int main()
// {
//     test(19);
//     test(10);
//     test(1);
//     test(0);

//     return(0);
// }