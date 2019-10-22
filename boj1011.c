//
// Created by 송지원 on 2019-03-22.
//

#include <stdio.h>

int main()
{
    int l=2, r=6; //왼쪽값 l과 오른쪽값 r
    int max = 2; //더할 수 있는 수 중 최댓값

    int T;
    long long x, y, diff; //diff는 이동해야 하는 실제 거
    long long diff2; //diff2는 diff와 l의 차이값

    int i, j;
    int cnt=0;

    scanf("%d", &T);

    for (i=0; i<T; i++)
    {

printf("\n===================================================\n");

        scanf("%lld %lld", &x, &y);
        diff = y - x;
printf("x:%d, y:%d, diff:%d\n", x, y, diff);

        if (diff==1)
        {
            printf("%d", 1);
            continue;
        }

        while (1) //l,r을 구하는 과정
        {
            if (diff>= l && diff <r) //현재 l, r에 해당하는 경우
            {
                break;
            }
            else //현재 l, r에 해당하지 않는 경우 -> 다음 l, r를 구한다
            {
                max ++;
                l = r;
                r += 2 * max;
            }
        }

printf("l:%d, r:%d, max:%d\n", l, r, max);


        //여기선 실제로 이동해야 하는 거리 diff와 왼쪽값 l과 오른쪽값 r이 구해진 상태
        diff2 = diff - l; //l 이후에 추가로 이동해야 하는 거리

printf("diff2:%lld\n", diff2);
printf("this moment cnt is 0 and real value is (%d)\n", cnt);

        if (diff2 - max >= 0) //최대로 갈 수 있는 거리인
        {
            diff2 -= max;
            cnt++;
        }

        for (j=max-1; j>0 && diff2>0; j--)
        {
            if (diff2 - j < 0) //현재 j 만큼 이동못함
            {
                continue;
            }
            else //j 만큼 이동가능
            {
                // diff2/j 이게 j만큼 이동가능한 횟수

                cnt += diff2/j;
                diff2 -= j * (diff2/j);

            }
        }

printf("cnt == (%d)\n", cnt);


        printf("\t\t\t\t\t<<<<%d>>>>\n=====================================\n\n\n\n", cnt + 2*max -2);

        l=2;
        r=6;
        max = 2;
        cnt=0;
    }
}