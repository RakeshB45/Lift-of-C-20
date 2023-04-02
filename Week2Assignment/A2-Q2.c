#include<stdio.h>

int main(){
    int size1,size2,arr1[20],arr2[20],R_arr[50],j=0;
    printf("Enter the first array size : ");
    scanf("%d",&size1);
    printf("Enter %d no of elements in the array : ",size1);
    for (int i = 0; i < size1; i++)
    {
      scanf("%d",&arr1[i]);
    }
    printf("Enter the second array size : ");
    scanf("%d",&size2);
    printf("Enter %d no of elements in the array : ",size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d",&arr2[i]);
    }
    for (int i = 0; i < size1; i++)
    {
            R_arr[i]=arr1[i];
    }
    for (int i = size1; i < size1+size2; i++)
    {
        R_arr[i]=arr2[j];
        j++;
    }
    for (int i=size1+size2-1;i>=0; i--)
    {
        printf("%d ",R_arr[i]);
    }
    
    return 0;
        
}