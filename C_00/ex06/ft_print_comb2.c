/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duysal <duysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:21:15 by duysal            #+#    #+#             */
/*   Updated: 2023/07/15 21:35:58 by duysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(48 + a / 10);
			putchar(48 + a % 10);
			putchar(' ');
			putchar(48 + b / 10);
			putchar(48 + b % 10);
			if (! (a == 98 && b == 99))
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return 0;
}*/
