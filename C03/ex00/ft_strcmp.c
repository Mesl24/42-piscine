int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
//     char *s1 = "hellodfsfs";
//     char *s2 = "helloff";

//     printf("%d", ft_strcmp(s1, s2));
// }
