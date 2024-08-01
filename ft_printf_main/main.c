
#include "ft_printf.h"
#include <stdio.h>
int main()
{

    int x;

    x = 42;
    ft_printf("char : %c\n", 'A');
    ft_printf("string : %s\n", "Hello");
    ft_printf("Pointer : %p\n", &x);
    ft_printf("intiger with d : %d\n", 5);
    ft_printf("intiger with i : %i\n", 5);
    ft_printf("unsigned : %u\n", 5);
    ft_printf("hex  : %X\n", 255);
    ft_printf("percentage  : %%\n");

    printf("char : %c\n", 'A');
    printf("string : %s\n", "Hello");
    printf("Pointer : %p\n", &x);
    printf("intiger with d : %d\n", 5);
    printf("intiger with i : %i\n", 5);
    printf("unsigned : %u\n", 5);
    printf("hex  : %X\n", 255);
    printf("percentage  : %%\n");
}