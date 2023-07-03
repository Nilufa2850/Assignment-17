//Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter a string constant : ");
    fgets(str,20,stdin);

    char x ;
    printf("Enter any character of given strings : ");
    scanf("%c",&x);

    int i ,count=0 ;

    for(i=0 ; str[i] ; i++)
            if(str[i] == x)
                    count ++ ;

    printf("\nFreq of %c is %d times.",str[i],count);

    return 0 ;

}
