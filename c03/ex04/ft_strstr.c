/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 16:18:13 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/12 16:09:51 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && to_find[n] != '\0')
	{ 
		while (to_find[n] == str[i + n])
		{ 
			if (to_find[n + 1] == '\0')
					return (str + i);
			n++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int		main()
{
	char arr[] = "Matt is such a princess";
	char arr_sec[] = "such a";
	printf("%s", ft_strstr(arr, arr_sec));
	return (0);
}
