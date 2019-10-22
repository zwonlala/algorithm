//
// Created by 송지원 on 2019-05-10.
//

//잘한 점 : 시계 방향, 반시계방향으로 이동하는 부분 실수 안하고 잘 짠거 같다
//실수 한 부분 : 총합 구하는 함수 리턴값 부분 실수
//             공기 청정기 예외 처리할때 row값만 보고 continue 시킨거
//             공기 청정기 조건 걸때 각 청정기 별로 조건 괄호로 안묶은 것
//             문제 조건에서 동시에 퍼진다는 부분 제대로 이해 못한 것

#include <stdio.h>

int R,C,T;
int room[50][50];
int cleaner_r1, cleaner_r2;

int init(); //초기값 입력받는 함수
int spread(); //미세먼지 확산시키는 함수

int dx[4] = {-1, +1, 0, 0};
int dy[4] = {0, 0, +1, -1};

int init()
{
    scanf("%d %d %d", &R, &C, &T);

    int i,j;
    int res;

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            scanf("%d", &res);
            room[i][j] = res;

            if (res == -1)
            {
                cleaner_r1 = i-1;
                cleaner_r2 = i;
                printf("c1 : %d \n", cleaner_r1);
                printf("c2 : %d \n", cleaner_r2);
            }
        }
    }
}

int spread()
{
    int i,j,r;
    int amount, spread_amount, cnt;

    int temp1[50][50];
    int temp2[50][50];

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            temp1[i][j] = 0;
            temp2[i][j] = 0;
        }
    }

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            //cleaner
            if ((i == cleaner_r1 && j == 0 )|| (i == cleaner_r2 && j == 0))
            {
//                printf("여기는 패스합니다...(%d, %d)\n", i, j);
                continue;
            }

            amount = room[i][j];
            spread_amount = amount / 5;
            cnt = 0;

            for (r=0; r<4; r++)
            {
                int new_r, new_c;
                new_r = i + dx[r];
                new_c = j + dy[r];

                if (new_r < 0 || new_r >= R || new_c < 0 || new_c >= C) {
                    continue;
                }
                else if((new_r == cleaner_r1 && new_c == 0) || (new_r == cleaner_r2 && new_c == 0)) {
                    continue;
                }
                else{
                    /*room[new_r][new_c] += spread_amount;*/
                    temp1[new_r][new_c] += spread_amount;
                    cnt++;
                }
            }

            /*room[i][j] -= spread_amount * cnt;*/
           room[i][j] -= spread_amount * cnt;

        }
    }

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            room[i][j] += temp1[i][j];
        }
    }
}

int clean1()
{
    int i,j;

    //1
    for (i=cleaner_r1-1; i>0; i--)
    {
        room[i][0] = room[i-1][0];
    }

    //2
    for (j=0; j<C-1; j++)
    {
        room[0][j] = room[0][j+1];
    }

    //3
    for (i=0; i<cleaner_r1; i++)
    {
        room[i][C-1] = room[i+1][C-1];
    }

    //4
    for (j=C-1; j>1; j--)
    {
        room[cleaner_r1][j] = room[cleaner_r1][j-1];
    }
    room[cleaner_r1][1] = 0;
}

int clean2()
{
    int i,j;

    //1
    for (i=cleaner_r2+1; i<R-1; i++)
    {
        room[i][0] = room[i+1][0];
    }

    //2
    for (j=0; j<C-1; j++)
    {
        room[R-1][j] = room[R-1][j+1];
    }

    //3
    for (i=R-1; i>cleaner_r2; i--)
    {
        room[i][C-1] = room[i-1][C-1];
    }

    //4
    for (j=C-1; j>1; j--)
    {
        room[cleaner_r2][j] = room[cleaner_r2][j-1];
    }
    room[cleaner_r2][1] = 0;
}

int get_sum()
{
    int i,j;
    int sum=0;

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            if ((i == cleaner_r1 && j == 0 )|| (i == cleaner_r2 && j == 0))
            {
                continue;
            }
            sum += room[i][j];
        }
    }
    return sum;
}

void print_room()
{
    int i,j;

    for (i=0; i<R; i++)
    {
        for (j=0; j<C; j++)
        {
            printf("%d ", room[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

int main()
{
    init();

    int res, times;

    times = T;

    while(times --)
    {
        spread();
//        printf("\t\t====== after spread =======\n");
//        print_room();

        clean1();
//        printf("\t\t====== after clean1 =======\n");
//        print_room();

        clean2();
//        printf("\t\t====== after clean2 =======\n");
//        print_room();
    }

//    printf("\t\t======final=======\n");
//    print_room();
    res = get_sum();

    printf("%d", res);
}