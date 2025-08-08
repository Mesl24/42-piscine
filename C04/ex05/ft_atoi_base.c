int ft_strlen(char  *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
        i++;
    return (i);
}

int    skip_whitespaces(char   *str, int   i)
{
    
    while (str[i] != '\0' && (str[i] == ' ' 
            || (str[i] >= 9 && str[i] <= 13)))
        i++;
    return (i);
}
int char_in_base(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}
int ft_atoi_base(char *str, char *base)
{
    int i;
    int j;
    int k;
    int sign;
    int result;
    int base_len;
    int digit_val;

    digit_val = 0;
    base_len = 0;
    result = 0;
    k = 0;
    sign = 1;
    i = 0;
    if (ft_strlen(base) < 2)
        return (0);
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-'
            || (base[i] >= 9 && base[i] <= 32))
                return (0);
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[j] == base[i])
                return(0);
            j++;
        }
        i++;
    }
    k = skip_whitespaces(str, k);
    while (str[k] != '\0' && (str[k] == '+' || str[k] == '-'))
    {
        if (str[k] == '-')
            sign = sign * -1;
        k++;
    }
    base_len = ft_strlen(base);
    while (str[k] != '\0')
    {
        digit_val = char_in_base(str[k], base);
        if (digit_val == -1)
            break;
        result = result * base_len + digit_val;
        k++;
    }
    return (result * sign);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str = "+---123";
//     char *base = "0123456789";
//     printf("%d", ft_atoi_base(str,base));
// }