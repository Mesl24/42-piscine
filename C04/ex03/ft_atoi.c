int ft_atoi(char *str)
{
    int i;
    int flag;
    int result;

    i = 0;
    flag = 1;
    result = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-') 
    {
        if (str[i] == '-')
            flag++;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    if (flag % 2 == 1)
        result = result * -1;
    return (result);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str = "----4221+--1234fsi3";
//     printf("%d", ft_atoi(str));
// }