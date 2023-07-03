//Write a program in C to Find the Frequency of Characters.

#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter a string constant : ");
    fgets(str,20,stdin);

    int i , j , count ;

    for(i=0 ; str[i-1] ; i++)
    {
            count = 0 ;

            for(j=0 ; str[j] ; j++)

                    if(str[i] == str[j])
                            count ++ ;

            printf("\nFreq of %c is %d times.",str[i],count);
    }

    return 0 ;

}
