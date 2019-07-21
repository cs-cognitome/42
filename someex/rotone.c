/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rotone.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 15:52:06 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 16:19:50 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_rotone(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            ft_putchar(str[i] + 1);
        else 
            ft_putchar(str[i]);
        i++;
    }
    return (*str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        ft_rotone(argv[1]);
        ft_putchar('\n');
    return (0);
}