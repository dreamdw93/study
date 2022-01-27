/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <hongkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:29:41 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/27 20:03:51 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int ngtv;
	int ret;

	i = 0;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		ret = str[i] - '0';
	}
}

int main(int argc, char* argv[])
{
	if(argc == 2)
	{
		ft_atoi(argv[1]);
	}
	return 0;
}

