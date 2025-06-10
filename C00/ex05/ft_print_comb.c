#include <unistd.h>

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;
    char s;

    s = ',';
    a = 0;
    b = 1;
    c = 2;

    while (a >= 0 && a <= 7)
    {
        a += '0';
        while (b >= 1 && b <= 8)
        {
            b += '0';
            while (c >= 2 && c <= 9)
            {
                c += '0';
                write (1, &a, 1);
                write (1, &b, 1);
                write (1, &c, 1);
                write (1, &s, 1);

                c -= '0';
                c++;
            }
            b -= '0';
            c = b + 2;
            b++;
        }
        a -= '0';
        b = a + 1;
        c = b + 1;
        a++;
    }
}

// int main(void)
// {
//     ft_print_comb();
// }