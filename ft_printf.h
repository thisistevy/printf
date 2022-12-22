/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:38:29 by iung              #+#    #+#             */
/*   Updated: 2022/12/12 10:31:05 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

unsigned int		ft_hexalenmin(unsigned int n);
unsigned int		ft_hexamin(unsigned int n);
unsigned int		ft_printhexamin(unsigned int n);
unsigned int		ft_hexalenmax(unsigned long int n);
unsigned long int	ft_hexamax(unsigned long int n);
unsigned long int	ft_printhexamax(unsigned long int n);
unsigned int		ft_ptrhexalen(unsigned long int n);
unsigned long int	ft_ptrhexamin(unsigned long int n);
unsigned long int	ft_printptr(unsigned long int n);
int					ft_select(va_list args, char c);
int					ft_printf(const char *str, ...);
int					ft_putchar(char c);
int					ft_countnbr(int n);
int					ft_putnbr(int n);
int					ft_putstr(const char *s);
int					ft_countunsigned_nbr(unsigned int n);
int					ft_printunsigned_nbr(unsigned int n);

#endif