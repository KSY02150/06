//두 가지 코드의 결과를 확인해보기//

#include <stdio.h>

void square(int a)
{
    a = a*a;
}

int main()
{
    int a=2;
    square(a);
    printf("a=%i\n", a);
}