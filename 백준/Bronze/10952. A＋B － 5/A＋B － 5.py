# https://www.acmicpc.net/problem/10951

while 1:
    A , B = map( int , input().split() )
    if A == 0 and B == 0:
        break
    print( A + B )