/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dsaripap <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/24 16:38:49 by dsaripap      #+#    #+#                 */
/*   Updated: 2019/04/12 11:29:11 by dsaripap      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	*result;

	result = (unsigned char *)b;
	c1 = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		result[i] = c1;
		i++;
	}
	return (result);
}
