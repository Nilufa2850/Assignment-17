//Write a program to reverse a string.

#include<stdio.h>
#include<string.h>

int main ()
{
    char a[10];
    printf("Enter a string constant : ");
    fgets(a,10,stdin);

    int i , length ;
    for(i=0 ; a[i] ; i++) ;

    length = i ;

    for(i=length-1 ; i>=0 ; i--)
        printf("%c",a[i]);
        

    //printf("Reverse order : %s",strrev(a));

    return 0;

}
