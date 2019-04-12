/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaripap <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/27 15:56:28 by dsaripap      #+#    #+#                 */
/*   Updated: 2019/04/12 11:23:36 by dsaripap      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*my_s1;
	unsigned char	*my_s2;
	size_t			i;

	my_s1 = (unsigned char *)s1;
	my_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*my_s1 == *my_s2)
		{
			my_s1++;
			my_s2++;
			i++;
		}
		else
			return (*my_s1 - *my_s2);
	}
	return (0);
}
