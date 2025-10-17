#include <stdio.h>

int main()
{
    int arr[] = {10,80,90,40,20,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i < size ; i++)
    {
        for(int j=i+1 ; j<sizeof(arr)/sizeof(arr[0]) ; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n Maximum Element of array is : %d",arr[0]);
    printf("\n Minimum Element of array is : %d",arr[size-1]);
    return 0;
}
