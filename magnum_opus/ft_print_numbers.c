/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_numbers.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/25 16:02:55 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/25 16:11:26 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
 
 #include <unistd.h>

 void   ft_putchar(char c)
 {
     write(1, &c, 1);
 }

 void   ft_print_numbers(void)
 {
     char i;

     i = '0';
     while (i <= 57)
     {
         ft_putchar(i);
         i++;
     }
     //ft_putchar('\n');
 }
 