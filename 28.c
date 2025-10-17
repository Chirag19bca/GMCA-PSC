#include <stdio.h>

int main()
{
    int arr[] = {10,80,90,40,20,60};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("\n Array elements in Before sorting: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i=0 ; i < size ; i++)
    {
        for(int j=i+1 ; j<size ; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n Array elements in ascending order: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
