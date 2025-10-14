#include <stdio.h>

int main() {
    
    char str1[100] ; 
    printf("Enter First String: ");
    fgets(str1, sizeof(str1), stdin);

    char str2[100] ; 
    printf("Enter Second String: ");
    fgets( str2, sizeof(str2), stdin );
    
    int n ; 
    printf("Enter number of characters to compare: ");
    scanf("%d", &n );
    
    int i = 0, result = 0;
    for ( ; i < n && str1[i] != '\0' && str2[i] != '\0' ; i++ ) {
        if ( str1[i] != str2[i] ) {
            result = str1[i] - str2[i];
            break;
        }
    }
    if ( result == 0 && i < n ) 
        result = str1[i] - str2[i];

    if ( result == 0 )
        printf("First %d characters are equal.\n", n);
     
    else if ( result < 0 )
        printf("First string is less than second string in first %d characters.\n", n);
    
    else 
        printf("First string is greater than second string in first %d characters.\n", n);
    
    return 0;
}
