int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
            i++;
        else
            return (0);
    }
    return (1);
}

// #include<stdio.h>
// int main(void)
// {
//     char    *str = "cjsijdsjdsidjs";
//     printf("%d", ft_str_is_lowercase(str));
// }