/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlcat.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/11 16:00:06 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/12 16:05:16 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	unsigned int i;
	unsigned int n;

	i = 0;
	n = 0;
	while(dest[i] != '\0')
		i++;
	while (dest[i] != '\0' && src[n] != '\0' && n < size - 1)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
