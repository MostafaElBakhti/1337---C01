#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}

void ft_ultimate_div_mod(int *a, int *b){

    int var1 = *a ;
    int var2 = *b ;
    
    *a = var1 / var2 ;
    *b = var1 % var2 ;
    
}

void ft_putnbr(int num){
    if(num < 0){
        ft_putchar('-');
        num = -num ;
    }
    if(num >= 10){
        ft_putnbr( num / 10) ;
    }
    ft_putchar((num % 10) + 48);
}



int main()
{
    
    int a = 10 ;
    int b = 2 ;

    ft_ultimate_div_mod(&a,&b) ;
    ft_putnbr(a);
    ft_putchar('\n');
    ft_putnbr(b);


    return 0;
}