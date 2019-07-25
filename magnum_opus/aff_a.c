/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   aff_a.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 14:42:09 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 15:52:50 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int argc, char **argv)
{   
    int i;

    i = 0;
    if (argc != 2)
    {
        ft_putchar('a');
        ft_putchar('\n');
        return (0);
    }
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] == 'a')
            {
                ft_putchar(argv[1][i]);
                ft_putchar('\n');
                return (0);
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}