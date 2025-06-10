#include <unistd.h>

void    ft_print_reverse_alphabet(void)
{
    int i;
    int c;

    i = 122;
    while (i <= 122 && i >= 97)
    {
        c = i;
        write (1, &c, 1);
        i--;
    }
}

// int main(void)
// {
//     ft_print_reverse_alphabet();
// }