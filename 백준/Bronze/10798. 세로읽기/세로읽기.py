data = [list(input()) for _ in range(5)]

for i in range( max ( len(l) for l in data ) ) :
    for j in range (5):
        if i < len(data[j]):
            print( data[j][i], end='')