//Write a program in C to copy one string to another string.

#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[20] , str2[20] ;

    printf("Enter string constant : ");
    fgets(str1,20,stdin);
    printf("\nOriginal : %s",str1);

    int i ;

    for(i=0 ; str1[i] ; i++)
        str2[i] = str1[i];

    str2[i] = '\0' ;

    printf("\nCopy : %s",str2);  

    //printf("copy : %s",strcpy(str2,str1));

    return 0 ;

}
