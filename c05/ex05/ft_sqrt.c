/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sqrt.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/16 11:50:58 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/20 13:59:26 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	while (sqrt * sqrt < nb && sqrt <= 46340)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	else
		return (0);
}
