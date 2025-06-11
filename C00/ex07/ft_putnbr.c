#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nbr)
{
    if (nbr == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    ft_putchar((nbr % 10) + '0');
}

// int main(void)
// {
//     ft_putnbr(3);
// }