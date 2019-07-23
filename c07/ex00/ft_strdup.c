/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 14:21:17 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 18:34:05 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}
char    *ft_strdup(char *src)
{
    int i;
    char *dest;

    i = 0;
    dest = malloc(sizeof(char) * ft_strlen(src) + 1); //+1 stands for '\0' in the end
    if (dest == 0)
        return (0);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

#include <stdio.h>
int main()
{
    char str[] = "Matt is such a princess!";
    printf("%s", ft_strdup(str));
    return (0);
}
