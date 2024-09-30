/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmynbyae <bmynbyae@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 16:09:41 by bmynbyae          #+#    #+#             */
/*   Updated: 2024/09/30 20:04:44 by bmynbyae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	void	*s;

	s = (void *)malloc(nmemb * sizeof(size));
	if (!s)
		return (NULL);
	ft_bzero(s, nmemb);
	return (s);
}
