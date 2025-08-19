/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:36:13 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/08/18 15:32:07 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	swp;
	int	fnum;
	int	lnum;

	fnum = 0;
	lnum = size - 1;
	while (fnum < lnum)
	{
		swp = tab[fnum];
		tab[fnum] = tab[lnum];
		tab[lnum] = swp;
		fnum++;
		lnum--;
	}
}
