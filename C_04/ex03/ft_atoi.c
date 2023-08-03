/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duysal <duysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:30:00 by duysal            #+#    #+#             */
/*   Updated: 2023/07/31 11:46:48 by duysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	temp;

	temp = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
		temp *= (44 - str[i++]);
	while (str[i] >= '0' && str[i] <= '9')
		result = (str[i++] - '0') + result * 10;
	return (temp * result);
}
