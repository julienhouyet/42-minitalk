#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{

	/*****************************/
	/************ CHAR *********/
	/*****************************/

	/*
	int written;

	written = ft_printf("%c", '0');
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%c", '0');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c ", '0');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c ", '0');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c", '0' - 256);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c", '0' - 256);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf("%c ", '0' + 256);
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%c ", '0' + 256);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '0', 0, '1');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '0', 0, '1');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", ' ', ' ', ' ');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '1', '2', '3');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '1', '2', '3');
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", '2', '1', 0);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", '2', '1', 0);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %c %c %c ", 0, '1', '2');
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %c %c %c ", 0, '1', '2');
    printf("\nCharacters written: %d\n\n", written);
	*/

	/*****************************/
	/************ STRING *********/
	/*****************************/

	/*

	int written;
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

	written = ft_printf("%s", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%s", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf("%s ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf("%s ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s ", "-");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s ", "-");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s ", "", "-");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s ", "", "-");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s ", " - ", "");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s ", " - ", "");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" NULL %s NULL ", NULL);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" NULL %s NULL ", NULL);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	return (0);

	*/

	/*****************************/
	/************ POINTER *********/
	/*****************************/

	/*

	int written;

	written = ft_printf(" %p ", -1);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p ", -1);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p ", 1);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p ", 1);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p ", 15);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p ", 15);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p ", 16);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p ", 16);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %p ", 17);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p ", 17);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p %p ", LONG_MIN, LONG_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p %p ", INT_MIN, INT_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p %p ", INT_MIN, INT_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %p %p ", 0, 0);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %p %p ", 0, 0);
    printf("\nCharacters written: %d\n\n", written);

	*/

	/*****************************/
	/************ NUMBER *********/
	/*****************************/
	
	/*

	int	written;

	written = ft_printf(" %d ", 0);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 0);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %d ", -1);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -1);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %d ", 1);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 1);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %d ", 9);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 9);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 10);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 10);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 11);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 11);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 15);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 15);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 16);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 16);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 17);
    printf("\nCharacters written: %d\n\n", written);
	written = ft_printf(" %d ", 17);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 99);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 99);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 100);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 100);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 101);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 101);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -9);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -9);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -10);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -10);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -11);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -11);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -14);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -14);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -15);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -15);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -16);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -16);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -99);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -99);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -100);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -100);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", -101);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", -101);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", INT_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = ft_printf(" %d ", INT_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", INT_MIN);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", INT_MIN);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", LONG_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", LONG_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", LONG_MIN);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", LONG_MIN);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", UINT_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", UINT_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", ULONG_MAX);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", ULONG_MAX);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d ", 9223372036854775807LL);
    printf("\nCharacters written: %d\n\n", written);
	written = printf(" %d ", 9223372036854775807LL);
    printf("\nCharacters written: %d\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	*/

	/*****************************/
	/************ UNNUMBER *********/
	/*****************************/




	int	written;

	written = ft_printf(" %u ", 0);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 0);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %u ", -1);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -1);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %u ", 1);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 1);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");

	written = ft_printf(" %u ", 9);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 9);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 10);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 10);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 11);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 11);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 15);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 15);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 16);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 16);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 17);
    printf("\nCharacters written: %u\n\n", written);
	written = ft_printf(" %u ", 17);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 99);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 99);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 100);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 100);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 101);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 101);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -9);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -9);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -10);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -10);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -11);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -11);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -14);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -14);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -15);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -15);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -16);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -16);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -99);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -99);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -100);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -100);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", -101);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", -101);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", INT_MAX);
    printf("\nCharacters written: %u\n\n", written);
	written = ft_printf(" %u ", INT_MAX);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", INT_MIN);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", INT_MIN);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", LONG_MAX);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", LONG_MAX);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", LONG_MIN);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", LONG_MIN);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", UINT_MAX);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", UINT_MAX);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", ULONG_MAX);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", ULONG_MAX);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u ", 9223372036854775807LL);
    printf("\nCharacters written: %u\n\n", written);
	written = printf(" %u ", 9223372036854775807LL);
    printf("\nCharacters written: %u\n\n", written);

	printf("-------------------------------\n\n");
	
	written = ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

}