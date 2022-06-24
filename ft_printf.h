/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 17:33:26 by misrailo          #+#    #+#             */
/*   Updated: 2022/01/31 12:30:31 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long long ptr);
int		ft_base_hex(unsigned long long n);
int		ft_printf(const char *str, ...);
int		ft_base_hexbig(unsigned int n);
int		ft_putnbrunsigned(unsigned int n);
int		ft_formats(va_list args, char c);

#endif