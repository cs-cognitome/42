/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 15:13:30 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/12 16:13:52 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while (dest[i] != '\0')
		i++;
	while (src[n] != '\0' && (n < nb))
	{
		dest[i] = src[n];
		i++;
		n++;
	} 
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char arr1[] = "abcd";
	char arr2[] = "efghij";
	printf("%s", ft_strncat(arr1, arr2, 2));
	return (0);
}	
