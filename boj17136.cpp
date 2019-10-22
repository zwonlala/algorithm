
// Created by 송지원 on 2019-04-13.
//

#include <iostream>

using namespace std;

int input[10][10];
int relation[10][10];

int box_cnt[5];


//i,j 부터 사이즈 n 의 사각형이 있는지 확인하고
// 있을 시에는 box_cnt[n-1]을 1 증가시키고 1 리턴
// 없을 시에는 0 리턴
int check_sum(int i, int j, int n)
{
    int cnt=0;

    for (int ii=i; ii<i+n+1; ii++)
    {
        for (int jj=j; jj<j+n+1; jj++)
        {
            cnt += input[ii][jj];
        }
    }

    if (cnt == n * n)
    {
        box_cnt[n-1]++;

        for (int ii=i; ii<i+n+1; ii++)
        {
            for (int jj=j; jj<j+n+1; jj++)
            {
                input[ii][jj] = 0;
            }
        }

        return 1;
    }
    else
    {
        return 0;
    }
}

void make_relation()
{
    int cnt;
    for (int i=0; i<10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            relation[i][j] = 0;
        }
    }

    for (int i=0; i<10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

        }
    }
}












for (int i=0; i<10; i++)
{
for (int j = 0; j < 10; j++)
{

}
}