/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/13 11:14:25 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lenth;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	lenth = 0;
	while (*(src + lenth) != '\0')
	{
		lenth++;
	}
	if (i > size)
		lenth = lenth + size;
	else
		lenth = lenth + i;
	j = 0;
	while (i < size - 1 && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (lenth);
}
