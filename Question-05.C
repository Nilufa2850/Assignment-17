//Write a program to convert a given string into lowercase.

#include<stdio.h>
#include<string.h>

int main ()
{
    char str[20];
    printf("Enter a UPPERCASE String Constant : ");
    fgets(str,20,stdin);

    printf("lowercase : ");

    for(int i=0 ; str[i] ; i++)
    {
        if( str[i]>='A' && str[i]<='Z')
                str[i]+=32 ;

        printf("%c",str[i]);
    }
    return 0 ;
}

// ..................... with built_in method ........................

int main ()
{
    char str[20];
    printf("Enter a UPPERCASE String Constant : ");
    fgets(str,20,stdin);

    printf("lowercase : %s",strlwr(str));
    return 0;
    
}
