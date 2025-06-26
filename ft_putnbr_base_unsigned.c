
#include "libftprintf.h"

static int error_if(char *base)
{
    int i;
    int j;
    
    i = 0;
    if (base[0] == '\0' || base[1] == '\0')
        return -1;
    while (base[i])
    {
        j = 1 + i;
        while (base[j])
        {
            if (base[i] == base[j] || base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
                return -1;
            j++;
        }
        i++;
    }
    return i;
}

int ft_putnbr_base_unsigned(unsigned long nbr, char *base)
{
    int lenbase;
    int count = 0;
    
    lenbase = error_if(base);
    if (lenbase == -1)
        return 0;
    
    if (nbr >= (unsigned long)lenbase)
        count += ft_putnbr_base_unsigned(nbr / lenbase, base);
    
    count += ft_printf_c(base[nbr % lenbase]);
    
    return count;
}