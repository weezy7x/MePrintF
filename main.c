#include "libftprintf.h"

int main() {


    unsigned int big = 4000000000U;
    //char *str2 = {"ZACK"};


    printf("\nTest avec printf:\n");
    printf("Caractère: %u\n", big);
    
    printf("\nTest avec ft_printf:\n");
    ft_printf("Caractère: %u\n", big);



    return 0;
}