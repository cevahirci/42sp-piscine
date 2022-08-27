/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apuchill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 15:47:53 by apuchill          #+#    #+#             */
/*   Updated: 2019/11/23 23:06:58 by apuchill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
//x: u sütun    y: t satır
void	rush(int u, int t)
{
	int y;
	int x;

	x = 1;
	while (x <= t && u > 0)
	{
		 = 1;
		while (y <= u)
		{
			if ((y == 1 && x == 1) || (y == u && x == t && y != 1 && x != 1))
				ft_putchar('/');
			else if ((y == u && x == 1) || (y == 1 && x == t))
				ft_putchar('\\');
			else if ((y == 1) || (y == u) || (x == 1) || (x == t))
				ft_putchar('*');
			else
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}
