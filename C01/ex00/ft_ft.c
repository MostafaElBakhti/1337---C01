/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-bakh <mel-bakh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 13:51:37 by mel-bakh          #+#    #+#             */
/*   Updated: 2025/08/19 16:51:57 by mel-bakh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c){
	write(1,&c,1) ;
}

void ft_putnbr(int nb){
	if(nb < 0){
		putchar('-');
		nb = -nb ;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar((nb % 10) + 48) ;
	
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void){
	int i ;
	i = 0 ;
	ft_ft(&i);
	// printf("%d\n" , i) ;
	ft_putnbr(i) ;
	ft_putchar('\n') ;
	return 0 ;	
}







	// int i ; 
	// i = 0 ;
	// int *p = &i ;
	// int **p1 = &p ;
	// int ***p2 = &p1 ;
	// int ****p3 = &p2 ;
	// int *****