/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   rot_13.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 12:57:36 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 18:05:21 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_rot_13(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'M') || (str[i] >= 'a' && str[i] <= 'm'))
            ft_putchar(str[i] + 13);
        else if ((str[i] >= 'N' && str[i] <= 'Z') || (str[i] >= 'n' && str[i] <= 'z'))
            ft_putchar(str[i] - 13);
        else 
            ft_putchar(str[i]);
        i++;
    }
    return (*str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        ft_rot_13(argv[1]);
        ft_putchar('\n');
    }
    return (0);
}