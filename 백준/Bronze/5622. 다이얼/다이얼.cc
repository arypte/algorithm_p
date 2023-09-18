#include<iostream>
using namespace std ;

int main () {

	string a ;

	cin >> a ;

	int l = a.size() ;

	int sum = 0 ;

	for( int i = 0 ; i < l ; i ++ ) {

		int t = a[ i ] - 'A' ;

		if( t < 15 ) {

			sum += ( ( t / 3 ) + 3 ) ;

		}

		if( t >= 15 && t <= 18 ) sum += 8 ;

		if( t > 18 && t <= 21 ) sum += 9 ;

		if( t > 21 ) sum += 10 ;

	}

	cout << sum ;

	return 0 ;

}
