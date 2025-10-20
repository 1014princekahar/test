#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str1[100] ;
    printf("Enter First String : ") ;
    gets( str1 ) ; 
    char str2[100] ;
    printf("Enter Second String : ") ;
    gets( str2 ) ; 

    int i = 0 ; 
    for ( ; str1[i] != '\0' ; i++ ) {

    }
    int j = 0 ;
    for( ; str2[j] != '\0' ; j++ ) {
        str1[i] = str2[j] ;
        i++ ; 
    }
    str1[i] = '\0' ; 
    printf("'%s'" , str1 ) ; 
    return 0;
}
