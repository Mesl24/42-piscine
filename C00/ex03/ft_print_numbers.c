#include <unistd.h>

void    ft_print_numbers(void)
{
    int i;
    char c;

    i = 0;
    while(i >= 0 && i <= 9)
    {
        c = i + '0';
        write (1, &c, 1);
        i++;
    }
}

// int main(void)
// {
//     ft_print_numbers();
// }