char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;

    while (dest[i] != '\0')
        i++;
    while ( src[j] != '\0' && j < nb)
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
//     char dest[15] = "hi";
//     char *src = "world";
//     int nb = 8;
    
//     printf("%s", ft_strncat(dest,src,nb));
// }