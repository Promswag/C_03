/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:39:13 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/18 19:44:35 by gbaumgar         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	length;

	i = 0;
	j = 0;
	length = ft_strlen(to_find);
	if (length == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (to_find[j] == str[i])
		{
			j++;
			if (j == length)
				return (str + i - j + 1);
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
