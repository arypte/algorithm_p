#include <cstdio>
int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) == 2)
        // scanf는 입력받은 갯수를 리턴한다
        // 만약에 scanf("%d",&a); 에서 입력이 제대로 들어왔다면 1이 리턴된다.
        // 그렇기 때문에 a,b를 입력받는 scanf가 2와 같다면이란 말은 입력이 있다면과 같은 말이다
        
        printf("%d\n", a + b);
}
