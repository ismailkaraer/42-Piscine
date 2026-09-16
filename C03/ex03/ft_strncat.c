/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikaraer <ikaraer@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/10 03:09:22 by ikaraer           #+#    #+#             */
/*   Updated: 2026/09/12 16:57:47 by ikaraer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char				*ptr;
	unsigned int		i;

	i = 0;
	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (src[i] != '\0' && i < nb)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (dest);
}
