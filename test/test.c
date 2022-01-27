/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <hongkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 12:36:38 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/27 17:39:17 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	first_word(char **c)
{
	printf("%s\n", *c);
}

int	main(int argc, char* argv[])
{
	
	if(argc == 2)
	{
		first_word(&argv[1]);
	}
	else
	{
		putchar('\n');
	}	
	return (0);
}
