/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countdown.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 15:54:11 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 16:01:16 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_countdown()
{
    char c;

    c = 57;
    while (c >= 48)
    {
        ft_putchar(c);
        c--;
    }
}

int main ()
{
    ft_countdown();
    ft_putchar('\n');
    return (0);
}