/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <tvoronko@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/20 16:10:30 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/23 13:21:52 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max)
{   
    int i;
    int *array;
    i = 0;
    if (min >= max)
    {
        array = NULL;
        return (0);
    }
    array = (int *) malloc(sizeof(array) * (max - min)); //giving memory to this array
    if (array == 0)
        return (-1);
    while (min < max)
    {
        array[i] = min;
        i++;
        min++;
    }
    *range = array;
    return (i); // size of range
}

int main()
{
    int *range;
    int i;

    i = 0;
    printf("%d\n",ft_ultimate_range(&range, 7, 15));
    while (i < 8)
    {  
        printf(" %d", range[i]);
        i++;
    }
    return (0);
}
