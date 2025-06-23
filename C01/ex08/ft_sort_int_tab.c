void    ft_sort_int_tab(int *tab, int   size)
{
    int i;
    int temp;
    int sorted;

    sorted = 0;

    while (!sorted)
    {
        sorted = 1;
        i = 0;
        while (i < size- 1)
        {
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
                sorted = 0;
            }
            i++;
        }
    }
    
}         

// #include <stdio.h>
// int main(void)
// {
//     int i = 0;
//     int arr[5] = {5,4,3,2,1};
//     ft_sort_int_tab(arr, 5);
//     while (i < 5)
//     {
//         printf("%d", arr[i]);
//         i++;
//     }
// }