/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 23:30:49 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/15 20:19:27 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_charupcase(char *str)
{
	char temp;

	temp = *str;
	if ((temp >= 'a') && (temp <= 'z'))
	{
		temp = ((temp - 'a') + 'A');
	}
	return (temp);
}

char	ft_charlowcase(char *str)
{
	char temp;

	temp = *str;
	if ((temp >= 'A') && (temp <= 'Z'))
	{
		temp = ((temp - 'A') + 'a');
	}
	return (temp);
}

char	*ft_strcapitalize(char *str)
{
	char	*curr;
	char	*prev;
	int		flag;

	flag = 0;
	curr = str;
	while (*curr)
	{
		if ((*prev == ' ') || (flag == 0))
		{
			*curr = ft_charupcase(curr);
			flag++;
		}
		else
			*curr = ft_charlowcase(curr);
		prev = curr;
		curr++;
	}
	return (str);
}
