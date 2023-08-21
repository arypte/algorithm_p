#include<iostream>
using namespace std ;

double input[ 1001 ] ;

int main () {
    
    int n ;
    
    cin >> n ;
    int max = 0 ;
    
    for( int i = 0 ; i < n ; i ++ ) {
        
        cin >> input[ i ] ; 
        if( input[ i ] > max ) max = input[ i ] ;

    }

    double sum = 0 ;
    for( int i = 0 ; i < n ; i ++ ) {
        
        input[ i ] = input[ i ] / max * 100 ;
        sum += input[ i ] ;

    }
    
    sum /= n ;
    
    cout << sum ;

}