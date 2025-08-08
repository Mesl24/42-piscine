#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int i;
    int j;
    int k;

    k = 0;
    i = 0;
    while (base[k] != '\0')
        k++;
    if (k < 2)
        return;
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-'
            || base[i] < 32 || base[i] > 126)
            return;
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[j] == base[i])
                return;
            j++;
        }
        i++;
    }
    if (nbr == -2147483648)
    {
        write (1, "-", 1);
        write (1, "2147483648", 10);
        return;
    }
    if (nbr < 0)
    {
        write (1, "-", 1);
        ft_putnbr_base(-(nbr / k), base);
        ft_putchar(base[-(nbr % k)]);
        return;
    }
    if (nbr >= k)
        ft_putnbr_base(nbr / k, base);
    ft_putchar(base[nbr % k]);
}

// int	main(void)
// {
// 	int	n = 42;
// 	char	*hex = "0123456789abcdef";
// 	char	*oct = "012345678";
// 	char	*dec = "0123456789";
// 	char	*bin = "01";

// 	ft_putnbr_base(n, dec);
// 	ft_putnbr_base(n, bin);
// 	ft_putnbr_base(n, oct);
// 	ft_putnbr_base(n, hex);

// } 