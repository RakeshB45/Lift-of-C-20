#include <stdio.h>

int main()
{
    int max_count = 0, arr[50], size, max_ele;
    printf("Enter the array size : ");
    scanf("%d", &size);
    printf("Enter the array values : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int count=0;
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > max_count)
        {
            max_count = count;
            max_ele = arr[i];
        }
    }
    printf("The max element is %d which occured %d times ", max_ele, max_count+1);

    return 0;
}