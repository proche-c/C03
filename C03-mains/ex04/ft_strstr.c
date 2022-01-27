/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/14 15:34:13 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_string(char *src, char *to_find)
{
	unsigned int	j;
	unsigned int	count;

	count = 0;
	j = 0;
	while (*(to_find + j) != '\0')
	{
		if (*(src + j) == *(to_find + j))
			count++;
		j++;
	}
	if (count == j)
		return (j);
	return (0);
}

char	*ft_strstr(char *src, char *to_find)
{
	unsigned int	i;
	unsigned int	result;

	if (*to_find == '\0')
		return (src);
	i = 0;
	while (*(src + i) != '\0')
	{
		if (*(src + i) == *to_find)
		{
			result = ft_check_string((src + i), to_find);
			if (result != 0)
				return (src + i);
		}
		i++;
	}
	return (0);
}
