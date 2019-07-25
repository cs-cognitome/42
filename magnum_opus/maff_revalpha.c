/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   maff_revalpha.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 17:28:15 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 17:39:30 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


void    ft_maff_revalpha(void)
{
    int i;

    i = 26;
    while (i >= 1)
    {
        if (i % 2 == 0)
            ft_putchar(i + 96);
        else
            ft_putchar((i + 96) - 32);
        i--;
    }
}

int main(void)
{
        ft_maff_revalpha();
        ft_putchar('\n');
        return (0);
}