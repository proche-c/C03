/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.com>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 20:31:19 by proche-c          #+#    #+#             */
/*   Updated: 2021/11/15 18:10:54 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;

	while (*s1 != '\0' && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	a = (unsigned char)*s1;
	b = (unsigned char)*s2;
	return (a - b);
}
