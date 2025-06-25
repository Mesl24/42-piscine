#include <unistd.h>
void    ft_putstr_non_printable(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 0 && str[i] <= 31)
        {
            write (1, "\\", 1);
            c  = str[i] / 16;
            if (c < 10)
                c = '0' + c;
            else   
                c = 'a' + (c - 10);
            write (1, &c, 1);
            c = str[i] % 16;
            if (c < 10)
                c = '0' + c;
            else
                c = 'a' + (c - 10);
            write(1, &c, 1);

        }
        else    
            write (1, &str[i], 1);
        i++;
    }
}

// int main(void)
// {
//     char *str = "gello \nbaaks";
//     ft_putstr_non_printable(str);
// }