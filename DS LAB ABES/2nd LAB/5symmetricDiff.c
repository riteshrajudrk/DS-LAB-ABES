// -----SYMMETRIC DIFFERENCE----------

#include <stdio.h>
int main()
{
    int arr1[100], n, m, arr2[100], arr3[100], y = 0;

    // input of first array
    printf("Enter the number of element of arr1 :");
    scanf("%d", &m);
    printf("Enter the elements of the array1 :");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // input of 2nd array
    printf("Enter the number of element of arr2 :");
    scanf("%d", &n);
    printf("Enter the elements of the array2 :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // main logic
    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr3[y++] = arr1[i];
        }
    }


        for (int j = 0; j < n; j++)
    {
        int flag = 0;
        for (int i = 0; i < m; i++)
        {
            if (arr2[j] == arr1[i])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr3[y++] = arr2[j];
        }
    }
    // printing the element
    printf("Output : \n");
    for (int i = 0; i < y; i++)
    {
        printf("%d", arr3[i]);
        printf("\n");
    }
}