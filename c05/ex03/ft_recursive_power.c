/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_recursive_power.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 18:03:44 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/19 11:30:53 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	if (power == 0)
		return (1);
	else
		result = ft_recursive_power(nb, power - 1) * nb;
	return (result);
}
