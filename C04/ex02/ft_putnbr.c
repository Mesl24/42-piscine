#include <unistd.h>
void    ft_putnbr(int   nb)
{
    char    c;

    
    if (nb == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2147483648", 10);
        return;
    }
    
    if (nb <= 2147483647)
    {
        if (nb < 0)
        {
            write (1, "-", 1);
            nb = -nb;
            ft_putnbr(nb);
        }
        else if (nb < 10)
        {
            c = nb + '0';
            write (1, &c, 1);
        }
        else
        {
            ft_putnbr(nb / 10);
            c = (nb % 10) + '0';
            write (1, &c, 1);
        }
    }
}

// int main(void)
// {
//     int nb = -21478;
//     ft_putnbr(nb);
// }