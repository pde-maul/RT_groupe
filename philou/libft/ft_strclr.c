/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-maul <pde-maul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:39:33 by pde-maul          #+#    #+#             */
/*   Updated: 2016/11/15 16:05:07 by pde-maul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	size_t len;

	if (s && (len = ft_strlen(s)) != '0')
	{
		while (len--)
		{
			s[len] = '\0';
		}
	}
}