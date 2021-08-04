/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdino <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 12:31:02 by hdino             #+#    #+#             */
/*   Updated: 2021/08/04 20:14:57 by hdino            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_putnbr(int nb);
void	ft_putstr(char *str);
int		div(int a, int b);
int		mul(int a, int b);
int		plus(int a, int b);
int		minus(int a, int b);
int		rem(int a, int b);

int	get_op(char *operator)
{
	if (operator[1] != '\0')
		return (-1);
	if (operator[0] == '/')
		return (0);
	if (operator[0] == '%')
		return (1);
	if (operator[0] == '*')
		return (2);
	if (operator[0] == '+')
		return (3);
	if (operator[0] == '-')
		return (4);
	return (-1);
}

int	calc(int x, int y, int oprtn)
{
	int	(*oprtns[5])(int x, int y);

	oprtns[0] = &div;
	oprtns[1] = &rem;
	oprtns[2] = &mul;
	oprtns[3] = &plus;
	oprtns[4] = &minus;
	return ((*oprtns[oprtn])(x, y));
}

int	main(int argc, char **argv)
{
	int	result;
	int	oprtr;

	oprtr = get_op(argv[2]);
	if (argc != 4)
		return (1);
	else if (oprtr == 0 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (oprtr == 1 && ft_atoi(argv[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else if (oprtr == -1)
	{
		write(1, "0", 1);
		return (0);
	}
	result = calc(ft_atoi(argv[1]), ft_atoi(argv[3]), oprtr);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
