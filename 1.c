#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char str1[100] ; 
    printf("Enter First String : ") ;
    fgets( str1 , sizeof(str1) , stdin ) ;

    char str2[100] ; 
    printf("Enter Second String : ") ; 
    fgets( str2 , sizeof(str2) , stdin ) ; 

    int n ; 
    printf("Enter Number Of Character For compare : ") ; 
    scanf("%d" , &n ) ; 

    int ans = strncmp( str1 , str2 , n ) ; 
    printf("%d" , ans ) ;
    if ( ans == 0 )
        printf("\n %d Character of Both Sttring is Equal.\n " , n ) ; 
    else if ( ans > 0 ) 
        printf("First string is greater than second string in first %d characters.\n " , n) ; 
    else 
        printf("First string is less than second string in first %d characters.\n " , n ) ; 
    return 0;
}
