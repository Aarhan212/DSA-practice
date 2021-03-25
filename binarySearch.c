#include<stdio.h>

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int bin_search(int Array[], int num, int key);

int main()
{
    int x,result ;

    int Arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &Arr[i]);
    }
    scanf("%d", &x);
    result = binary_search(Arr, 10, x);
    printf("%d", result);

    return 0;
}
int binary_search(int Array[], int num, int key)
{
    int low = 0;
    int high = num - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Array[mid] < key)
        {
            low = mid + 1;
        }
        else if (Array[mid] > key)
        {
            high = mid - 1;
        }
        else 
        {
            return mid;
        }
    }
    return -1;
}