student = [i+1 for i in range(30)]

for i in range(1,29):
    student.remove(int(input()))
for i in student:
    print(i)    