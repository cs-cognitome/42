/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 12:56:24 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/13 13:52:42 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (((s1[i] != '\0' && s2[i] != '\0') && s1[i] == s2[i]) && i < n - 1)
		i++;
	return(s1[i] - s2[i]);
}

#include <stdio.h>
int 	main()
{
	char str1[] = "abcde";
	char str2[] = "ab";
	printf("%d", ft_strncmp(str1, str2, 3));
	return (0);

}
