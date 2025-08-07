unsigned int ft_strlcat (char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    unsigned int k;
    unsigned int available;
    unsigned int box;

    k = 0;
    i = 0;
    j = 0;

    while (src[i] != '\0')
        i++;
    while (dest[j] != '\0')
        j++;
    box = j;
    if (size < j)
        return (size + i);
    available = size - j - 1;
    while (src[k] != '\0' && k < available)
    {
        dest[j] = src[k];
        j++;
        k++;
    }
    dest[j] = '\0';
    return (box + i);
}

// #include <stdio.h>
// int main(void)
// {
//     char dest[19] = "hello";
//     char *src = "there";
//     int size = 2;

//     printf("%d", ft_strlcat(dest,src,size));
// }