#include <stdio.h>
int main()
{
    //Initializing variable.
    char str[100], c;
    
    printf("\nEnter a string : ");
    gets(str);

    printf("\nEnter a character to be removed: ");
    scanf("%c",&c);

    for(int i = 0; str[i] != 0; ++i)
    {
       if(str[i]==c)
       {
        int j = i;
        while(str[j] != 0){
            str[j] = str[j+1];
            j++;
        }
       }
    }
     //Printing output.
    printf(" After removing the character the string is :\n");
    puts(str);
    return 0;
}