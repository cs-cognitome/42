/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_find_next_prime.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tvoronko <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/17 11:54:58 by tvoronko     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/19 11:41:14 by tvoronko    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long i;

	i = 3;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (!(nb % 2))
		return (0);
	while (i * i <= nb)
	{
		if (!(nb % i))
			return (0);
		i += 2;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int next_prime;

	next_prime = nb;
	while (!(ft_is_prime(next_prime)))
		next_prime++;
	return (next_prime);
}
