/*Write a program in C to count the total number of alphabets, digits and special
characters in a string.*/

#include <stdio.h>

int main ()
{
    char str[20] ;
    printf("Enter string constant : ");
    fgets(str,20,stdin);

    int i , c1=0 , c2=0 , c3=0 ;

    for(i=0 ; str[i] ; i++)
    {
        if( (str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') )
            c1++;

        else if ( str[i]>='0' && str[i]<='9')
            c2++;

        else
            c3++;
    }

    printf("\nTotal number of alphabets is : %d",c1);
    printf("\nTotal number of digits is : %d",c2);
    printf("\nTotal number os special character is : %d",c3);

    return 0 ;
}
