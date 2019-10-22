//
// Created by 송지원 on 2019-03-22.
//

#include <stdio.h>

int main()
{
    long long X;
    long long l=2, r=3;
    long long sum = 3;

    scanf("%lld", &X);

    if (X == 1)
    {
        printf("1/1");
    }
    else
    {
        while (1)
        {
            if ((X-l)*(X-r) <= 0) //X가 l과 r 사이에 있으면
            {
                if (sum%2?1:0) //sum이 홀수인 경우
                {
                    printf("%lld/%lld", X-l+1, sum - X + l -1);
                }
                else //sum이 짝수인 경우
                {
                    printf("%lld/%lld", sum - X + l -1, X-l+1);
                }
                break;
            }
            else //X가 l과 r 사이에 없다면 다음 파트로 이동
            {
                l = r+1;
                r = r + sum;
                sum++;
            }
        }
    }
    return 0;
}
