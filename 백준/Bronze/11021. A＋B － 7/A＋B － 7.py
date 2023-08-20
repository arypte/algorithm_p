# https://www.acmicpc.net/problem/11021
# 반복문을 사용하여 입력 + 출력하기

n = int( input () )

for i in range( n ):
    A , B = map( int , input().split() )
    print( "Case #%d:" %(i+1) , A + B)