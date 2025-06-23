char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    i = 0;

    while (i < n)
    {
        if (src[i] != '\0')
            dest[i] = src[i];
        else
            dest[i] = '\0';
        i++;
    }
    return (dest);
}

// #include<stdio.h>
// int main(void)
// {
//     char  src[] = "hello";
//     char  dest[10];
//     int i = 0;
//     int j = 0;

//     while (j < 10)
//     {
//         dest[j] = '?';
//         j++;
//     }

//     ft_strncpy(dest, src, 8);
//     while (i < 10)
//     {
//         printf("'%c' ", dest[i]);
//         i++;
//     }
// }