/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: xander <xander@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/18 11:50:39 by xander        #+#    #+#                 */
/*   Updated: 2022/04/22 16:07:31 by xander        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>
#include <string.h>

#define GREEN "\033[38;5;46m"
#define RED "\033[38;5;196m"
#define RESET "\033[37m"

#define PTEST(...) (M_PTEST(__LINE__, __VA_ARGS__))

#define	M_PTEST(line, ...) (\
{\
	printf("\n --- TEST %d ---", i); \
	printf("\n--- FT_PRINTF ---\n\n"); \
	ft_print = ft_printf(__VA_ARGS__); \
	printf("\n\n--- PRINTF ---\n\n"); \
	print = printf(__VA_ARGS__); \
	printf("\n\n"); \
	printf("ft_printf return: %d\n", ft_print);\
	printf("printf return: %d\n", print);\
	i++;\
})

/*
	WWPD?
	(What would printf do?)
*/

int	main(void)
{
	int				i;
	int				ft_print;
	int				print;

	i = 1;
	PTEST("%s", (char *) 0);
	PTEST("%d", INT_MAX);
	PTEST("%i", INT_MIN);
	PTEST("%p", (char *) 0);
	PTEST("%x", INT_MAX);
	PTEST("%X", 50);
	PTEST("%u", 50);
	PTEST("%u", -50);
	PTEST("%s & %s", "Xander", "Angeli");
	PTEST("%c", 'i');
	PTEST("%u & %x", -50, -50);
	PTEST("%3x", 100);
	PTEST("%5x", 1112300);
	PTEST("%6u", 1100);
	PTEST("%6s", "Hallo");
	PTEST("%8s", (char *) 0);
	PTEST("%10d", 21839);
	PTEST("%4c", 'c');
	PTEST("%12p", "Hallo");
	PTEST("%%%%");
	return (0);
}
