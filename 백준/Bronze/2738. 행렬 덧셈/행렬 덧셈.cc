#include<stdio.h>

int main () {
    
    int n , m ;
    
    scanf( "%d %d" , &n , &m ) ;
    
    int data[ 2 ][ 101 ][ 101 ] ;
    
    for( int k = 0 ; k < 2 ; k ++ ) {
    
    for( int i = 0 ; i < n ; i ++ )
        for( int j = 0 ; j < m ; j ++ ){
            scanf( "%d" , &data[ k ][ i ][ j ] ) ;
            if( k == 1 ) data[ 0 ][ i ][ j ] += data[ k ][ i ][ j ] ;
        }
        
    }
    for( int i = 0 ; i < n ; i ++ ) {
        for( int j = 0 ; j < m ; j ++ )
            printf( "%d " , data[ 0 ][ i ][ j ] ) ;
        printf( "\n" ) ;
    }
    
}