int srclen(char *str)
{
    int i;
    i = 0;

    while(str[i] != '\0')
        i++;
    return(i);
}

unsigned int ft_strlcpy (char *dest, char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size -1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(srclen(src));
}

// #include <stdio.h>

// int main(void)
// {
//     char src[] = "hello world";
//     char dest[6];

//     unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Copied: %s\n", dest);
//     printf("Length of src: %u\n", len);
// }
