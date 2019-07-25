/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   maff_alpha.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 16:22:05 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 17:28:12 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


void    ft_maff_alpha(void)
{
    int i;

    i = 1;
    while (i <= 26)
    {
        if (i % 2 != 0)
            ft_putchar(i + 96);
        else 
            ft_putchar((i + 96) - 32);
        i++;
    }
}

int main(void)
{
        ft_maff_alpha();
        ft_putchar('\n');
        return (0);
}
    
