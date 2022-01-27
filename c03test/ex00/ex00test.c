/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <hongkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:43:10 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/20 20:19:56 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}


int	main()
{
	char *s1 = "Hello World!";
	char *s2 = "Hello World!";
	char *s3 = "hello world!";
	char *s4 = "Hawaiii";

	int ret1 = strcmp(s1, s2);
	int ret2 = strcmp(s1, s3);
	int ret3 = strcmp(s1, s4);

	printf("strcmp의 출력 결과\n");
	printf("s1 / s2 = %d\n",ret1);
	printf("s1 / s3 = %d\n",ret2);
	printf("s1 / s4 = %d\n",ret3);

	int ret4 = ft_strcmp(s1, s2);
	int ret5 = ft_strcmp(s1, s3);
	int ret6 = ft_strcmp(s1, s4);

	printf("ft_strcmp의 출력 결과\n");
	printf("s1 / s2 = %d\n",ret4);
	printf("s1 / s3 = %d\n",ret5);
	printf("s1 / s4 = %d\n",ret6);

	return 0;
}
