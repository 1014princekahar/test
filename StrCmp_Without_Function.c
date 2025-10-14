#include <stdio.h>

int main() {
    char str1[100] ; 
    printf("Enter First String: ") ;
    fgets( str1 , sizeof(str1) , stdin ) ;

    char str2[100] ; 
    printf("Enter Second String: ") ;
    fgets( str2 , sizeof(str2) , stdin );

    int flag = 0 ;
    int i = 0 ; 
    for ( ; str1[i] != '\0' && str2[i] != '\0' ; i++ ) {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0') 
        printf("Strings are equal.\n");
    
    else 
        printf("Strings are not equal.\n");
    
    return 0;
}
