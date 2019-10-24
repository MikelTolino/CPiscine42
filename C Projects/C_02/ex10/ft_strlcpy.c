/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 05:01:16 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/10 11:49:46 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	
	i=0;

	while (*(src+i))
	{
		*(dest+i)=*(src+i);
		i++;
	}
	*(dest+i)='\0';
	return (i);
