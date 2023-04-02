#include <stdio.h>

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
void shiftIntegers(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()
{
    int size,arr[50];
    printf("Enter the array size : ");
    scanf("%d",&size);
    printf("Enter the array values : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    shiftIntegers(arr, size);
    return 0;
}