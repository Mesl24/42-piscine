#include <unistd.h>

void    ft_is_negative(int n)
{
    char    c; 
    char    p;
    
    c = 'N';
    p = 'P';

    if (n < 0)
        write (1, &c, 1);
    else
        write (1, &p, 1);
}

// int main(void)
// {
//     ft_is_negative(-1);
// }