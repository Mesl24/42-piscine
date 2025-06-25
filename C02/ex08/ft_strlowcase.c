char    *ft_lowercase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char    str[] = "abcdEFG";
//     printf("%s", ft_lowercase(str));
// }