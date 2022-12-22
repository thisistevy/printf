/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <iung@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:45:58 by iung              #+#    #+#             */
/*   Updated: 2022/12/22 17:41:08 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_select(va_list args, char c)
{
	if (c == 'c')
		return (ft_putchar((char)va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'p')
		return (ft_printptr(va_arg(args, unsigned long int)));
	else if (c == 'u')
		return (ft_printunsigned_nbr(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_printhexamin(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_printhexamax(va_arg(args, unsigned int)));
	else if (c == '%')
		return (write(1, "%", 1));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	va_start(args, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			i++;
			len += ft_select(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

// int main()
// {
// 	    // test char
//     char letter = 'c';

//     if (printf("len = %d\n", printf("char = %c\n", letter)) == 
//         ft_printf("len = %d\n", ft_printf("char = %c\n", letter)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // test str
//     char *str = NULL;

//     if (printf("len = %d\n", printf("str = %s\n", str)) == 
//         ft_printf("len = %d\n", ft_printf("str = %s\n", str)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // test pointer
//     void* ptr;

//     if (printf("len = %d\n", printf("ptr = %p\n", &ptr)) == 
//         ft_printf("len = %d\n", ft_printf("ptr = %p\n", &ptr)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // nbr decimal;
//     int dec = -12;

//     if (printf("len = %d\n", printf("dec = %d\n", dec)) == 
//         ft_printf("len = %d\n", ft_printf("dec = %d\n", dec)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // nbr entier;
//     int i = 15;

//     if (printf("len = %d\n", printf("entier = %i\n", i)) == 
//         ft_printf("len = %d\n", ft_printf("entier = %i\n", i)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // unsigned int i;
//     unsigned int ui = -45678;

//     if (printf("len = %d\n", printf("unsigned int = %u\n", ui)) == 
//         ft_printf("len = %d\n", ft_printf("unsigned int = %u\n", ui)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // pourcentage;

//     if (printf("len = %d\n", printf("pourcentage = %%\n")) == 
//         ft_printf("len = %d\n", ft_printf("pourcentage = %%\n")))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // nbr hexamin
//     unsigned int x = 278909898;

//     if (printf("len = %d\n", printf("hexamin = %x\n", x)) == 
//         ft_printf("len = %d\n", ft_printf("hexamin = %x\n", x)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");

//     // nbr hexamax
//     unsigned int max = 278909898;
//     if (printf("len = %d\n", printf("hexamax = %X\n", max)) == 
//         ft_printf("len = %d\n", ft_printf("hexamax = %X\n", max)))
//     printf("♥‿♥\n\n");
//     else printf("(҂◡_◡)\n\n");
// }