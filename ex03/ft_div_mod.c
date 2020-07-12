/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 15:42:39 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/12 08:37:42 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */#include<unistd.h>
#include<unistd.h>

//void ft_putchar(char c)

 void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a %b;
	char c = '\n';

	write(1,&div,1);
	write(1,&c,1);
	write(1,&mod,1);

}
int main()
{
	int w=7,x=2,pz,py,*y,*z;
	 y =&py;
	 z=&pz;


	ft_div_mod(w,x,y,z);


}
