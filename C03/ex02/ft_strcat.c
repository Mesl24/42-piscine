char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    j = 0;
    i = 0;
    while (dest[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

// #include <stdio.h>
// int main(void)
// {
//     char dest[10] = "hello";
//     char *src = "world";

//     printf("%s", ft_strcat(dest,src));
// }