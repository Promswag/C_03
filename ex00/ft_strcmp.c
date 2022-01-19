/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:05:45 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/18 19:03:36 by gbaumgar         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0')
			return (-1);
		if (s2[i] == '\0')
			return (1);
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

// int	ft_strcmp(char *s1, char *s2)
// {
// 	int	i;
// 	int	s1_length;
// 	int	s2_length;

// 	s1_length = ft_strlen(s1);
// 	s2_length = ft_strlen(s2);
// 	i = 0;
// 	while (i < s1_length || i < s2_length)
// 	{
// 		if (s1[i] == '\0' && s2[i] == '\0')
// 			return (0);
// 		if (s1[i] == '\0')
// 			return (-1);
// 		if (s2[i] == '\0')
// 			return (1);
// 		if (s1[i] > s2[i])
// 			return (1);
// 		if (s1[i] < s2[i])
// 			return (-1);
// 		i++;
// 	}
// 	return (0);
// }
