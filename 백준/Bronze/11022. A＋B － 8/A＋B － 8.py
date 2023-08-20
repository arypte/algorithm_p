# https://www.acmicpc.net/problem/11022
# 반복문을 사용하여 입력 + 출력하기

n = int( input () )

for i in range( n ):
    A , B = map( int , input().split() )
    print( "Case #%d: %d + %d = %d" %(i+1 , A , B , A + B))