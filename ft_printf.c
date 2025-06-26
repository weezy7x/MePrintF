/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouvy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 14:05:10 by ebouvy            #+#    #+#             */
/*   Updated: 2025/06/25 14:05:11 by ebouvy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


// Fonction ft_printf simplifiée qui gère %c
int ft_printf(const char *type, ...) {
    va_list args;
    int count = 0;  // Compteur de caractères imprimés
    int i = 0;
    
    va_start(args, type);
    
    while (type[i]) {
        if (type[i] == '%' && type[i + 1]) {
            i++;  // Passer le '%'
            
            if (type[i] == 'c') {
                // Récupérer le caractère depuis les arguments variables
                char c = (char)va_arg(args, int);  // char est promu en int
                count += ft_printf_c(c);
            }
            else if(type[i] == 's'){
                char *str = va_arg(args, char*);
                count += ft_printf_s(str);
            }
            else if(type[i] == 'p'){
                void *adr = va_arg(args, void*);
                count += ft_print_p(adr);
            }             
            else if(type[i] == 'd'){
                int n = va_arg(args, int);
                count += ft_printf_d(n);
            }            
            else if(type[i] == 'i'){
                int n = va_arg(args, int);
                count += ft_printf_i(n);
            }
            else if(type[i] == 'u'){
                unsigned int n = va_arg(args, unsigned int);
                count += ft_printf_u(n);
            }else if(type[i] == 'x'){
                unsigned int n = va_arg(args, unsigned int);
                count += ft_printf_x(n,0);
            }else if(type[i] == 'X'){
                unsigned int n = va_arg(args, unsigned int);
                count += ft_printf_x(n,1);
            }else if (type[i] == '%') {
                // Gérer le cas %%
                count += ft_printf_c('%');

            }
            else {
                // Spécificateur non géré, imprimer tel quel
                count += ft_printf_c('%');
                count += ft_printf_c(type[i]);
            }
        }
        else {
            // Caractère normal, l'imprimer directement
            count += ft_printf_c(type[i]);
        }
        i++;
    }
    
    va_end(args);
    return count;
}
