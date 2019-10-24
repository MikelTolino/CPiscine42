/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 12:32:02 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/06 22:10:22 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);
void	primera_ultima_linea(int i, int j, int x, int y);
void	entrelineas(int i, int x);

void	rush(int x, int y)
{
	int i;
	int j;
	int x1;
	int y1;

	x1 = x;
	y1 = y;
	i = 0;
	j = 0;
	while (j < y)
	{
		while (i < x)
		{
			if (j == 0 || j == y - 1)
				primera_ultima_linea(i, j, x1, y1);
			else
				entrelineas(i, x1);
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

void	primera_ultima_linea(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || (j == y - 1 && i == x - 1 && i != 0 && j != 0))
		ft_putchar('/');
	else if ((j == y - 1 && i == 0) || (j == 0 && i == x - 1))
		ft_putchar(92);
	else
		ft_putchar('*');
}

void	entrelineas(int i, int x)
{
	if (i == 0 || i == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}
