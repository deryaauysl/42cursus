/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duysal <duysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 03:01:05 by duysal            #+#    #+#             */
/*   Updated: 2023/07/23 04:47:37 by duysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (j != size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				k = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = k;
			}
			i++;
		}
		j++;
	}
}
