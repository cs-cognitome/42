/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countdown.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/21 11:31:25 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/21 12:11:07 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/* 
int     main()
{
    int i;
    char c;

    i = 9;
    c = i + '0';
    while (c >= '0')
    {
        ft_putchar(c);
        c--;
    }
    ft_putchar('\n');
}
*/

int main()
{
    char c;

    c = 57;
    while (c >= 48)
    {
        ft_putchar(c);
        c--;
    }
    ft_putchar('\n');
}