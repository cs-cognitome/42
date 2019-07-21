/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ulstr.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 16:23:05 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 17:28:30 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_ulstr(char *str)
{
    int i;

    i  = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            ft_putchar(str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            ft_putchar(str[i] + 32);
        else 
            ft_putchar(str[i]);
        i++;
    }
    return (*str);
}

int     main(int argc, char **argv)
{
    if (argc == 2)
        ft_ulstr(argv[1]);
    ft_putchar('\n');
    return (0);
}