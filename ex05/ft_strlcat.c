/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:59:43 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/21 10:00:30 by gbaumgar         ###   ########.fr       */
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
	int	i;
	int	j;
	int	k;
	int	length;
	int	max;

	k = 0;
	j = 0;
	length = ft_strlen(src);
	max = ft_strlen(dest);
	if ((int)size == 0)
		max = 0;
	if (src[0] == '\0')
		length = 0;
	i = 0 + ft_strlen(dest);
	while (i < (int)size && dest[i] != '\0')
		k = ++i;
	while (src[j] != '\0' && i < (int)size - k - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (length + max);
}
