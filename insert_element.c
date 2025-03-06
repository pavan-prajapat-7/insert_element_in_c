/*
 * File: insert_element.c
 * Author: Pavan.R
 * Date: 2025-03-06 
 * Description: This program inserts an element at a specified position in an array.
 * Version: 1.0
 */
#include <stdio.h>
void main()
{
    int arr[10], ele, pos, i, n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    printf("Enter the elements of the array :");
    for (i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("enter the element to be inserted :");
    scanf("%d", &ele);
    printf("Enter the position :");
    scanf("%d", &pos);
    if (pos < 1 || pos > n+1)
    {
        printf("Invalid position");
    } 
    else 
    {
        for (i = n ; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = ele;
        printf("Array after insertion :");
        for (i = 0; i <= n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}