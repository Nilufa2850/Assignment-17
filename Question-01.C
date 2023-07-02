// Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>

int main ()
{
    char str[] = "Nilufa" ;

    int i ; 
    for(i=0 ; str[i] ; i++) ; 

    printf("Lenght is %d",i);
    return 0;
}

// ......................................................ANOTHER WAY ............................................................

/*
#include<stdio.h>

int main ()
{
    char str[] = "Nilufa" ;

    int i , count = 0 ; 
    for(i=0 ; str[i] ; i++) 
        count ++ ; 

    printf("Lenght is %d",count);
    return 0;
}
*/
