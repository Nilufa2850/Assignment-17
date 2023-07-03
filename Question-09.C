//Write a C program to sort a string array in ascending order.

#include<stdio.h>

int main()
{
    char str[20];
    printf("Enter a string constant : ");
    fgets(str,20,stdin);

    int i , j , temp = 0;

    for(i=0 ; str[i] ; i++)
    {
    
        for(j=i+1 ; str[j] ; j++)
        
                if( str[i] > str[j])
                {
                    temp = str[i] ;
                    str[i] = str[j] ;
                    str[j] = temp ;
                }

        printf("%c",str[i]);

    }
    return 0 ;
}
