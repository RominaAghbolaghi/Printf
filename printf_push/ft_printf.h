/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmohamma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 11:33:13 by rmohamma          #+#    #+#             */
/*   Updated: 2022/12/12 11:34:01 by rmohamma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	print_varg(va_list varg, char c);
int	pf_char(char c);
int	pf_str(char *str);
int	pf_int(int num);
int	pf_unint(unsigned int num);
int	pf_base(unsigned int arg, char hex);
int	putbase_hex(unsigned long num, char *base);
int	pf_pointer(unsigned long addr);

#endif
