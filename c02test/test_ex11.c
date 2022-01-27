/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <hongkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 15:34:29 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/20 18:10:37 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int n)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (n >= 16)
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
		write(1, &hex[n], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			print_hex(str[i]);
		} 
		else 
		ft_putchar(str[i]);
		i++;
	}
}

int	main()
{
	char *test = "Co한글ucou\ntu vas bien ?";
	printf("printf: %s\n",test);
	ft_putstr_non_printable(test);
}
