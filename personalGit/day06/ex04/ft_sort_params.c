/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfrancal <rfrancal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 12:54:26 by rfrancal          #+#    #+#             */
/*   Updated: 2017/08/16 23:33:16 by rfrancal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while ((*s1) && (*s2))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_print_args(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_putstr(*argv);
		ft_putchar('\n');
		argv++;
		i++;
	}
}

int		increment(int flag, int i)
{
	if (flag != 0)
	{
		return (i + 1);
	}
	else if (flag == 0)
	{
		return (0);
	}
	else
		return (i);
}

int		main(int argc, char **argv)
{
	char	**temp;
	char	*curr;
	int		i;
	int		flag;

	i = 0;
	temp = argv++;
	if (--argc < 2)
		return (0);
	while (i < argc - 1)
	{
		flag = 1;
		curr = *temp;
		if (ft_strcmp(curr, *(temp + 1)) > 0)
		{
			*temp = *(temp + 1);
			*(temp + 1) = curr;
			flag = 0;
			temp = argv;
		}
		i = increment(flag, i);
		if (flag != 0)
			temp++;
	}
	ft_print_args(argc, argv);
}
