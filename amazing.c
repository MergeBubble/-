#include "stdio.h"
int main(){
    int n ;
    long long int m ;
    scanf("%d %lld" , &n ,&m );
    int value[n] ;
    for(int i = 0; i < n ; i ++)
    {
        scanf("%d" , &value[i]) ;
    }
    long long result = 0 ;
    for(int i = 0 ; i < (1<< n) ; i ++)
    {
        int count = 0 ;
        long long sum = 1 ;
        for(int j = 0 ; j < n ;  j ++) {
            if(i & (1<<j))
            {
                sum*= value[j] ;
                count ++ ;
            }
        }
        if( count & 1 )
            result += m/sum ;
        else if( count )
            result -= m/sum ;
    }
    printf("%lld" , result) ;
}