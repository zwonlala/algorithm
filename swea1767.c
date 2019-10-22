//
// Created by 송지원 on 2019-07-24.
//

#include<stdio.h>
int array[12][12];
int ANS=0;



int count_left(int i, int j, int N);
int count_right(int i, int j, int N);
int count_up(int i, int j, int N);
int count_down(int i, int j, int N);
void check(int i, int j, int N);
void mark(int i, int j, int N, int direct);

int main()
{
    int T;
    int N;


    scanf("%d", &T);

    for (int t=1; t<=T; t++)
    {
        scanf(" %d ", &N);

        int i,j;
        for (i=0; i<N; i++)
        {
            printf("\n");
            for (j=0; j<N; j++)
            {
//                printf( "%d/%d/", i, j);
                scanf("%d", &array[i][j]);
//                printf("%d ", array[i][j]);
            }

        }




        for (int d=1; d<=(N-1)/2; d++)
        {
            //좌
            for (int i=d+1; i<=N-d-2; i++)
            {
                if (array[i][d] == 1)
                {
                    check(i, d, N);
                }
            }

            //우
            for (int i=d+1; i<=N-d-2; i++)
            {
                if (array[i][N-d-1] == 1)
                {
                    check(i, N-d-1, N);
                }
            }

            //상
            for (int i=d+1; i<=N-d-2; i++)
            {
                if (array[d][i] == 1)
                {
                    check(d, i, N);
                }
            }

            //하
            for (int i=d+1; i<=N-d-2; i++)
            {
                if (array[N-d-1][i] == 1)
                {
                    check(N-d-1, i, N);
                }
            }

            //대각선
            check(d, d, N);
            check(d, N-d-1, N);
            check(N-d-1, d, N);
            check(N-d-1, N-d-1, N);

        }

        printf("#%d: %d\n", t, ANS);
        ANS = 0;


    }
}


int count_left(int i, int j, int N)
{
    int result = 0;
    for (int index = 0; index<j; index++)
    {
        result += array[i][index];
    }
    if (result == 0) {
        result = j-1;
    }
    else {
        result = 99999;
    }
    return result;
}
int count_right(int i, int j, int N)
{
    int result = 0;
    for (int index=j+1; index<N; index++)
    {
        result += array[i][index];
    }
    if (result == 0) {
        result = N-1-j;
    }
    else {
        result = 99999;
    }
    return result;
}
int count_up(int i, int j, int N)
{
    int result = 0;
    for (int index=0; index<i; index++)
    {
        result += array[index][j];
    }
    if (result == 0) {
        result = i-1;
    }
    else {
        result = 99999;
    }
    return result;
}
int count_down(int i, int j, int N)
{
    int result = 0;
    for (int index=i+1; index<N; index++)
    {
        result += array[index][j];
    }
    if (result == 0) {
        result = N-1-j;
    }
    else {
        result = 99999;
    }
    return result;
}

void check(int i, int j, int N)
{
    printf("input check: %d %d %d\n", i, j, N);

    int state[4];
    state[0] = count_left(i, j, N);
    state[1] = count_right(i, j, N);
    state[2] = count_up(i, j, N);
    state[3] = count_down(i, j, N);

    int min_length = state[0];
    int min_direct = 0;

    for (int index=1; index<4; index++)
    {
        if (state[index] < min_length)
        {
            min_length = state[index];
            min_direct = index;
        }
    }

    ANS += min_length;
    mark(i, j, N, min_direct);
}

void mark(int i, int j, int N, int direct)
{
    printf("input mark: %d %d %d %d\n", i, j, N, direct);
    int dx[4] = {0, 0, -1, +1};
    int dy[4] = {-1, +1, 0, 0};

    while(i>-1 && i<N && j>-1 && j<N)
    {
        printf("(%d,%d)\n", i, j);
        i += dy[direct];
        j += dx[direct];

        array[i][j] =1;

    }

    for( int i=0; i<N; i++)
    {
        printf("\n");
        for (int j=0; j<N; j++)
        {
            printf("%d ", array[i][j]);
        }
    }
}