#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_div_mod(int a, int b, int *div, int *mod){
    
    *div = a / b ;
    *mod = a % b ;
    
    
}


void ft_putnbr(int num){
    if(num < 0){
        ft_putchar('-');
        num = -num ;
    }
    if(num > 10){
        ft_putchar( num / 10) ;
    }
    ft_putchar((num % 10) + 48);
}



int main()
{
    
    int a = 10 ;
    int b = 2 ;
    int var1 ; 
    int var2;
    ft_div_mod(a,b,&var1,&var2) ;
    ft_putnbr(var1);
    ft_putchar('\n');
    ft_putnbr(var2);


    return 0;
}