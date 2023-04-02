#include<stdio.h>

int main(){
    char str[100],i=0,vowel=0,consonant=0;
    printf("Enter the string : ");
    scanf("%s",&str);
    while (str[i]!='\0')
    {
        if (str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowel++;
        }
        else if (str[i]==' ')
        {
            continue;
        }
        else{
            consonant++;
        }
        i++;
    }
    printf("No of vowels in the string is : %d\n",vowel);
    printf("The no of consonant in the string is : %d",consonant);
    
    return 0;
}

