#include<stdio.h>
int main() {
    int n , i , r , sum = 0 , base = 1 ;
    printf("Enter a value : ");
    scanf("%d",&n);
    for( i = 0 ; n > 0 ; i++ ) {
        r = n % 10 ;
        if( r == 1 )
            sum += (r*base) ;
        base *= 2 ;
        n /= 10 ;
    }
    printf("Decimal : %d ", sum );
}