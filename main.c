#include "libftprintf.h"

int main() {


    int n = -125;
    //char *str2 = {"ZACK"};


    printf("\nTest avec printf:\n");
    printf("Caractère: %d\n", n);
    
    printf("\nTest avec ft_printf:\n");
    ft_printf("Caractère: %d\n", n);

    int j = 0x12;

    printf("\nTest avec printf:\n");
    printf("Caractère: %i\n", n);
    printf("Caractère: %i\n", j);

    printf("\nTest avec ft_printf:\n");
    ft_printf("Caractère: %i\n", n);
    ft_printf("Caractère: %i\n", j);

    return 0;
}