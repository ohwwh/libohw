/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoh <hoh@student.42.kr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:47:29 by ohw               #+#    #+#             */
/*   Updated: 2022/07/27 13:16:17 by hoh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H
# include "libft.h"
# include <stdarg.h>

typedef struct s_tag
{
	int		width;
	int		precision;
	int		shop;
	int		hype;
	int		space;
	int		plus;
	int		dot;
	int		zero;
	char	first;
	char	empty;
}t_tag;

void	ft_putnbr_base_fd(long n, int base, int capital, int fd);
void	ft_putnbr_base_precision(long n, int base, int capital, int precision);
void	ft_putstr_precision(char *s, int precision);
void	ft_putaddress_fd(void *p, int fd);
void	ft_putaddress_precision(void *p, int precision);
int		ft_printf(const char *fmt, ...);
int		ft_checkdigit(long nbr, int bs);
int		ft_checkdigit_address(void	*p);
int		checkbase(const char *base);
int		isbase(char c, const char *base);
int		power(int n, int x);

#endif
