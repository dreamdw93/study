/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hongkim <hongkim@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:38:44 by hongkim           #+#    #+#             */
/*   Updated: 2022/01/27 14:49:25 by hongkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char));
	if(pc == NULL)
	{
		printf("동적 메모리 할당에 실패했습니다. \n");
		exit(1);
	}
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	*(pc + i) = 0;
	
	printf("%s\n", pc);
	free(pc);
	return 0;
}
