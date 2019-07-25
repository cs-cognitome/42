/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   hello.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 16:12:12 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 16:20:10 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i; 

    i = 0;
    while (str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

 
int main()
{
    //write(1, "Hello World!\n", 13);
    ft_putstr("Hello World!\n");
    return (0);
}



