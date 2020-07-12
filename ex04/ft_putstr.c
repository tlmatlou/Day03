/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:43:30 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/12 09:01:49 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putstr(char *str)
{
	int i= 0;
	while(str[i] !='\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int main()
{
	char a[] = "Hello World";

	ft_putstr(a);
	ft_putchar('\n');

	return 0;
}
