/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_range.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 15:21:04 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 13:20:21 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int     *ft_range(int min, int max)
{   
    int *array;
    int i;

    i = 0;
    if (min >= max)
        return (NULL);
    array = (int *) malloc(sizeof(array) * (max - min));
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    return (array);
}

#include <stdio.h>
int main()
{   
    int i;
    int *array; 

    i = 0;
    array = ft_range(1, 10);
    while (i < (10 - 1))
    {
        printf("%d", array[i]);
        i++;
    }
    return (0);
}
