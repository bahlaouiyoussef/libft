/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybahlaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:11:01 by ybahlaou          #+#    #+#             */
/*   Updated: 2018/10/29 13:12:11 by ybahlaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;

	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	len = ft_strlen(s);
	if (len == 0)
		return (ft_strdup(""));
	while (*(s + len) == ' ' || *(s + len) == '\t' || *(s + len) == '\n')
		len--;
	return (ft_strsub(s, 0, len + 1));
}
