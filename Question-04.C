//Write a program to convert a given string into uppercase.

#include<stdio.h>
#include<string.h>
int main ()
{
    char str[20];
    printf("Enter String Constant in lowercase :\n");
    fgets(str,20,stdin);

    int i ;

    printf("Uppercase : ");
    for(i=0 ; str[i] ; i++)
    {
        if( str[i]>='a' && str[i]<='z')
                str[i]=str[i]-32 ;

        printf("%c",str[i]);
    }

    return 0 ;
}

//..................... with built_in method ......................

int main ()
{
    char str[20];
    printf("Enter String Constant in lowercase :\n");
    fgets(str,20,stdin);

    printf("Uppercase : %s",strupr(str) );
    return 0 ;

}
