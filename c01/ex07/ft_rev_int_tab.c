/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_rev_int_tab.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/07 18:35:41 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/09 07:00:19 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int num;
	int last;
	int temp;

	num = 0;
	last = size - 1;
	temp = 0;
	while (num < last)
	{
		temp = tab[num];
		tab[num] = tab[last];
		tab[last] = temp;
		num++;
		last--;
	}
}
