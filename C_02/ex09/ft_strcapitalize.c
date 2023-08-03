/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duysal <duysal@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:00:50 by duysal            #+#    #+#             */
/*   Updated: 2023/07/25 11:21:22 by duysal           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	else
		str[0] = str[0];
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A'
				&& str[i] <= 'Z'))
		{
			if (!((str[i - 1] >= 'a'
						&& str[i - 1] <= 'z') || (str[i - 1] >= 'A'
						&& str[i - 1] <= 'Z') || (str[i - 1] >= '0'
						&& str[i - 1] <= '9')))
				(str[i]) -= 32;
		}
		i++;
	}
	return (str);
}
