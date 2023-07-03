//Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main ()
{
    char str[20];
    printf("Enter a string constant : ");
    fgets(str,20,stdin);

    char x ;
    printf("\nEnter a character of this given string : ");
    scanf("%c",&x);

    int i , count =0 ;

    for(i=0 ; str[i] ; i++)
        if( str[i]==x)
            count++ ;

    printf("%c occurres %d times",x,count);

    return 0 ;

}
