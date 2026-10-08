//combination을 계산해주는 프로그램//

#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;
    for(i=0; i<a; i++)
    {
        res = res * (i+1);
    }

    return res;
}

int combination(int n, int r)
{
    int up, down;
    //분자 계산, up에 저장
    up = factorial(n);

    //분모 계산, down에 저장
    down = factorial(n-r) * factorial(r);

    return(up/down);
}

int main(void)
{
    int result;
    int n, r;      //변수 선언

    printf("input n: ");    //입력받기
    scanf("%i", &n);
    printf("input r: ");
    scanf("%i", &r);
    
    result = combination(n, r);  //combination 실행

    printf("the combination result is %i\n", result); //결과 출력
}
