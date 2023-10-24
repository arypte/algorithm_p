
input_data = input()

count = 0
l = len( input_data )

for i in range( ( l // 2 ) ):
    if input_data[ i ] == input_data[ l - 1 - i ]:
        count += 1

if count == ( l // 2 ):
    print( '1' )
else:
    print( '0' )