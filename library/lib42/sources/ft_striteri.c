/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Nathanael <nervin@student.42adel.org.au    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:33:50 by nervin            #+#    #+#             */
/*   Updated: 2022/03/23 21:51:55 by Nathanael        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib42.h"

/*
NAME
	ft_striterti
PARAMETERS
	1.	The string on which to iterate.
	2.	The function to apply to each character.
RETURN VALUES
	None.
EXTERNAL FUNCTIONS.
	None.
DESCRIPTION
	Applies the function f to each character of the string passed as an argument
	and passing it's index as first argument. Each character is passed by 
	address to f to be modified if necessary.
EXPLAINATION
	Iterates through the string until the null char.
	Applies the function passed as a parameter, passing the iterator and the
	character address from the string.
	Keeps going until the end.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
