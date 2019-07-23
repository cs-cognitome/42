/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 19:20:44 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 18:33:12 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int n;

    i = 0;
    n = 0;
    while (dest[i] != '\0')
        i++;
    while (src[n] != '\0')
    {
        dest[i] = src[n];
        i++;
        n++;
    }
    dest[i] = '\0';
    return (dest);
}

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

char    *ft_strjoin(int size, char **strs, char *sep)
{
    int j;
    int total_len;
    char *j_strings;

    j = 0;
    total_len = 0;

    while(j < size)
    {
        total_len = total_len + ft_strlen(strs[j]) + ft_strlen(sep);
        j++;
    }

    j = 0;
    j_strings = malloc(sizeof(char) * total_len + 1);

    while (j < size - 1)
    {
        ft_strcat(j_strings, strs[j]);
        ft_strcat(j_strings, sep);
        j++;
    }
    ft_strcat(j_strings, strs[j]);
    return (j_strings);
} 

#include <stdio.h>
int main()
{
    char *tab[] = {"first", "second", "third", "forth", "fifth"};
    char *str = ft_strjoin(5,tab, " ");
    printf("%s", str);
}
