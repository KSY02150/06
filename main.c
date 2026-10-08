//두 가지 코드의 결과를 확인해보기//

#include <stdio.h>

int square(int a)
{
    return(a*a);
}

int main()
{
    int a=2;
    a = square(a);
    printf("a=%i\n",a);
}