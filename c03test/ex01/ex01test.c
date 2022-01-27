/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <imflyingkong@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:20:30 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/24 11:26:44 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n - 1) && (s1[i] == s2[i]) && s1[i])
		i++ ;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

int main ()
{
	char *s1 = "Hello World!";
	char *s2 = "Hello World!";
	char *s3 = "HelLO world!";
	char *s4 = "qwerty";

	printf("s1 = %s\n",s1);
	printf("s2 = %s\n",s2);
	printf("s3 = %s\n",s3);
	printf("s4 = %s\n",s4);

	int ret1 = strncmp(s1, s2, 4);
	int ret2 = strncmp(s1, s2, 20);
	int ret3 = strncmp(s1, s3, 3);
	int ret4 = strncmp(s1, s3, 8);
	int ret5 = strncmp(s1, s4, 0);
	int ret6 = strncmp(s1, s4, 50);

	printf("strncmp의 출력 결과\n");
	printf("s1 / s2 / 4 = %d\n",ret1);
	printf("s1 / s2 / 20 = %d\n",ret2);
	printf("s1 / s3 / 3 = %d\n",ret3);
	printf("s1 / s3 / 8 = %d\n",ret4);
	printf("s1 / s4 / 0 = %d\n",ret5);
	printf("s1 / s4 / 50 = %d\n",ret6);
	
	int ret7 = ft_strncmp(s1, s2, 4);
	int ret8 = ft_strncmp(s1, s2, 20);
	int ret9 = ft_strncmp(s1, s3, 3);
	int ret10 = ft_strncmp(s1, s3, 8);
	int ret11 = ft_strncmp(s1, s4, 0);
	int ret12 = ft_strncmp(s1, s4, 50);

	printf("ft_strcmp의 출력 결과\n");
	printf("s1 / s2 / 4 = %d\n",ret7);
	printf("s1 / s2 / 20 = %d\n",ret8);
	printf("s1 / s3 / 3 = %d\n",ret9);
	printf("s1 / s3 / 8 = %d\n",ret10);
	printf("s1 / s4 / 0 = %d\n",ret11);
	printf("s1 / s4 / 50 = %d\n",ret12);
	return 0;
}
