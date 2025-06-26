/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 13:55:56 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/25 14:00:22 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "Libft/libft.h"
# include <stdarg.h>

int ft_printf(const char *type, ...);
int ft_printf_c(char c);
int ft_printf_s(char *str);
int ft_printf_d(int n);
int ft_print_p(void *ptr);
int ft_putnbr_base_unsigned(unsigned long nbr, char *base);
void ft_putnbr_base(int nbr, char *base);
int ft_printf_i(int n);

#endif 
