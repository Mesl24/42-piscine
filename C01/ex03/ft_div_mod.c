void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 12;
    int div;
    int mod;
    ft_div_mod(x,y,&div,&mod);
    printf("%d%d", div,mod);
}