/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:59:03 by ohw               #+#    #+#             */
/*   Updated: 2022/07/27 13:24:42 by hoh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

extern int	nbr(va_list *app, const char **fmt);
extern int	non_nbr(va_list *app, const char **fmt);

int	ft_printf(const char *f, ...)
{
	va_list	ap;
	int		ret;

	va_start(ap, f);
	ret = 0;
	while (*f)
	{
		if (*f == '%')
		{
			f ++;
			if (*f == 'c' | *f == 's' | *f == 'p')
				ret += non_nbr(&ap, &f);
			else if (*f == 'd' | *f == 'i' | *f == 'u' | *f == 'x' | *f == 'X')
				ret += nbr(&ap, &f);
			else if (*f == '%')
				ret += write(1, f ++, 1);
		}
		else
			ret += write(1, f ++, 1);
	}
	va_end(ap);
	return (ret);
}
