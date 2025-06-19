void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int j;
    int temp;
    
    i = 0;
    j = size - 1;

    while( i < j)
    {
        temp = tab[j];
        tab[j] = tab[i];
        tab[i] = temp;
        i++;
        j--;
    }
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int arr[5] = {1,2,3,4,5};
//     ft_rev_int_tab(arr, 5);
//     while (i < 5)
//     {
//         printf("%d", arr[i]);
//         i++;
//     }
// }