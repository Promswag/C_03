/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbaumgar <gbaumgar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:06:03 by gbaumgar          #+#    #+#             */
/*   Updated: 2022/01/21 10:03:04 by gbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, unsigned int nb);
char			*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

// ex00
// int	main(void)
// {
// 	char	*tab1;
// 	char	*tab2;
// 	char	*tab3;
// 	char	*tab4;
// 	char	*tab5;

// 	tab1 = "abcde";
// 	tab2 = "abcdefgh";
// 	tab3 = "abc";
// 	tab4 = "abd";
// 	tab5 = "abcde";
// 	printf("%d\n", ft_strcmp(tab1, tab2));
// 	printf("%d\n", ft_strcmp(tab1, tab3));
// 	printf("%d\n", ft_strcmp(tab1, tab4));
// 	printf("%d\n", ft_strcmp(tab1, tab5));
// }

//ex01
// int	main(void)
// {
// 	char	*tab1;
// 	char	*tab2;
// 	char	*tab3;
// 	char	*tab4;
// 	char	*tab5;

// 	tab1 = "abcde";
// 	tab2 = "abcde";
// 	tab3 = "abcdefgi";
// 	tab4 = "abccef";
// 	tab5 = "abcdefgg";
// 	printf("%d\n", ft_strncmp(tab1, tab2, 5));
// 	printf("%d\n", strncmp(tab1, tab2, 5));
// 	printf("%d\n", ft_strncmp(tab1, tab3, 10));
// 	printf("%d\n", strncmp(tab1, tab3, 10));
// 	printf("%d\n", ft_strncmp(tab1, tab4, 10));
// 	printf("%d\n", strncmp(tab1, tab4, 10));
// 	printf("%d\n", ft_strncmp(tab1, tab5, 5));
// 	printf("%d\n", strncmp(tab1, tab5, 5));
// }

//ex02
// int	main(void)
// {
// 	char	tab1[50];
// 	char	*tab2;
// 	char	*tab3;
// 	char	*tab4;
// 	char	*tab5;

// 	tab2 = "abcde";
// 	tab3 = ".12345";
// 	tab4 = ".carapuce";
// 	tab5 = ".avion";
// 	printf("%s\n", ft_strcat(tab1, tab2));
// 	printf("%s\n", ft_strcat(tab1, tab3));
// 	printf("%s\n", ft_strcat(tab1, tab4));
// 	printf("%s\n", ft_strcat(tab1, tab5));
// }

//ex03
int	main(void)
{
	char	tab1[50];
	char	*tab3;
	char	*tab4;
	char	*tab5;
	char	tab2[50];

	// tab1[0] = 'x';
	// tab2[0] = 'x';
	// tab1[1] = '\0';
	// tab2[1] = '\0';
	tab3 = "aaaaa.aaaaa.aaaaa.aaaaa.";
	tab4 = "bbb";
	tab5 = "ccccc.ccccc.ccccc.ccccc.";
	printf("%s\n", ft_strncat(tab2, tab3, 5));
	printf("%s\n", strncat(tab1, tab3, 5));
	printf("%s\n", ft_strncat(tab2, tab4, 4));
	printf("%s\n", strncat(tab1, tab4, 4));
	printf("%s\n", ft_strncat(tab2, tab5, 0));
	printf("%s\n", strncat(tab1, tab5, 0));
	printf("%s\n", ft_strncat(tab2, tab5, 20));
	printf("%s\n", strncat(tab1, tab5, 20));
}

//ex04
// int	main(void)
// {
// 	char	*tab2;
// 	char	*tab3;
// 	char	*tab4;
// 	char	*tab5;

// 	tab2 = "aaabbbcccdddeeefff";
// 	tab3 = "bcccd";
// 	tab4 = "g";
// 	tab5 = "";
// 	printf("%s\n", ft_strstr(tab2, tab3));
// 	printf("%s\n", ft_strstr(tab2, tab4));
// 	printf("%s\n", ft_strstr(tab2, tab5));
// }

//ex05
// int	main(void)
// {
// 	char	tab1[50];
// 	char	tab2[50];
// 	char	*tab3;
// 	char	*tab4;
// 	char	*tab5;
// 	char	*tab6;
// 	char	*tab7;

// 	tab1[0] = 'x';
// 	tab2[0] = 'x';
// 	tab1[1] = '\0';
// 	tab2[1] = '\0';
// 	tab3 = "aaabbbcccdddeeefff";
// 	tab4 = "bcccd";
// 	tab5 = "ggrgrgrg";
// 	tab6 = "aaa...vvv...ddd...fff...ggg...hhh...rrr...ttt...hhh...jjj...ccc";
// 	tab7 = ".......////////.........////////////.......//////";
// 	printf("%d\n", ft_strlcat(tab1, tab3, 0));
// 	printf("%ld\n", strlcat(tab2, tab3, 0));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab4, 1));
// 	printf("%ld\n", strlcat(tab2, tab4, 1));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab5, 2));
// 	printf("%ld\n", strlcat(tab2, tab5, 2));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab6, 3));
// 	printf("%ld\n", strlcat(tab2, tab6, 3));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab6, 33));
// 	printf("%ld\n", strlcat(tab2, tab6, 33));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab6, 5));
// 	printf("%ld\n", strlcat(tab2, tab6, 5));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// 	printf("%d\n", ft_strlcat(tab1, tab7, 50));
// 	printf("%ld\n", strlcat(tab2, tab7, 50));
// 	printf("%s\n", tab1);
// 	printf("%s\n", tab2);
// }
