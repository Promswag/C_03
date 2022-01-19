/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:59:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/18 18:59:58 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				length;
	int				max;

	j = 0;
	length = ft_strlen(src);
	max = ft_strlen(dest);
	i = 0 + ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i < size + max - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (i);
}
