/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:43:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/10 01:45:46 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
	{
		if (*(str + i) < 32 || *(str + i) > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
