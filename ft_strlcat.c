/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksura <ksura@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:57:39 by ksura             #+#    #+#             */
/*   Updated: 2022/04/26 15:39:49 by ksura            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	pos1;
	int	pos2;

	pos1 = 0;
	pos2 = 0;
	if (dstsize > 0)
	{
		while (*(dst + pos1) != '\0')
		{
			pos1++;
		}
		while (*(src + pos2) != '\0')
		{
			if ((pos1 + pos2) == (int)dstsize)
			{
				pos2--;
				break ;
			}
			*(dst + pos1 + pos2) = *(src + pos2);
			pos2++;
		}
		*(dst + pos1 + pos2) = '\0';
		while (*(src + pos2) != '\0')
			pos2++;
	}
	return (pos1 + pos2);
}

#include <stdio.h>

void test(int size)
{
    char string[] = "Whats up, Lamaaaaaaaa";
    char buffer[]= "Hey Elephant!...";
    int len;

    len = ft_strlcat(buffer,string,size);

    printf("Appended '%s' to '%s', length %d\n",
            string,
            buffer,
            len
          );
}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}