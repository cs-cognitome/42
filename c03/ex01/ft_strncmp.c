/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 12:56:24 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/12 14:24:26 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;

	i = 0;
	while ((s1[i] != '\0' && s2[i] != '\0') && (s1[i] || s2[i])  < n)
		i++;
	return(s1[i] - s2[i]);
}

#include <stdio.h>
int 	main()
{
	char str1[] = "abcXXX";
	char str2[] = "abcd";
	printf("%d", ft_strncmp(str1, str2, 3));
	return (0);

}
