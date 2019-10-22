//
// Created by 송지원 on 2019-05-10.
//
#include <stdio.h>

int R,C,M; //격자의 행, 열, 상어 수
int r,c,s,d,z; //(r,c)는 상어의 위치, s는 속력, d는 이동 방향, z는 크기

// d가 1인 경우는 위, 2인 경우는 아래, 3인 경우는 오른쪽, 4인 경우는 왼쪽을 의미

int dx[4] = {-1, +1, 0, 0};
int dy[4] = {0, 0, +1, -1};

int location [10000][4]; //상어의 위치,속력,이동방향 기록하는 배열

int fishman_loc=-1; //현재 낚시꾼의 위치
int fishman_sum=0; //잡은 상어의 총 합

void init(); //입력 받는 부분
void catch(); //낚시꾼이 상어 잡는 부분
void move_eat(); //상어가 이동하고 잡아먹는 부분

void init()
{
    int i = 0;

    for (i=0; i<10000; i++) //location arr init
    {
        location[i][0] = -1;
        location[i][1] = -1;
    }

    scanf("%d %d %d", &R, &C, &M);

    for (i=0; i<M; i++)
    {
        scanf("%d %d %d %d %d", &r, &c, &s, &d, &z);
        location[z-1][0] = r-1;
        location[z-1][1] = c-1;
        location[z-1][2] = s;
        location[z-1][3] = d-1;
    }
}

void catch()
{
    int i;

    int row=100000;
    int size=-1;
    fishman_loc++;
printf("\t\tfishman_loc: %d\n", fishman_loc);

    for (i=0; i<10000; i++) //'i' is the size of the shark
    {
        if (location[i][1] != fishman_loc) //해당 물고기와 낚시꾼이 다른 열에 있는 경우
        {
            continue;
        }
        else //해당 크기의 물고기가 있고, 낚시꾼과 같은 열에 있는 경우
        {
printf("(%d,%d) size%d find!!\n",location[i][0], location[i][1] ,i+1);
            if (location[i][0] < row)
            {
                row = location[i][0];
                size = i+1;
            }
        }
    }
    if (size != -1)
    {
printf("%dth size : %d\n", fishman_loc, size);
        //catch complete!
        fishman_sum += size;

        //delete the catched shark!
        location[size-1][0] = -1;
        location[size-1][1] = -1;
    }

}

void move_eat()
{
    int i,j;
    int new_r, new_c;
    int r;
    int direction;

    int loc_temp[100][100];

    //check doubled located sharks
    for (i=0; i<100; i++)
    {
        for (int j=0; j<100; j++)
        {
            loc_temp[i][j] = -1;
        }
    }

    for (i=0; i<10000; i++)
    {
        if (location[i][0] == -1)
        {
            continue;
        }
        else
        {
            r = location[i][2];
            while (r--)
            {
                direction = location[i][3];

                //go up
                if (direction == 0 && location[i][0] == 0)
                {
                    location[i][3] = 1;
                }
                //go down
                else if (direction == 1 && location[i][0] == R-1)
                {
                    location[i][3] = 0;
                }
                //go right
                else if (direction == 2 && location[i][1] == C-1)
                {
                    location[i][3] = 3;
                }
                //go left
                else if (direction == 3 && location[i][1] == 0)
                {
                    location[i][3] = 2;
                }

                direction = location[i][3];
                location[i][0] += dx[direction];
                location[i][1] += dy[direction];












//                if (location[i][0] == 0 || location[i][0] == R-1 || location[i][1] == 0 || location[i][1] == C-1)
//                {
//                    direction = location[i][3];
//
//                    if (direction%2==0) {location[i][3]++;}
//                    else {location[i][3]--;}
//                }
//
//                direction = location[i][3];
//                location[i][0] += dx[direction];
//                location[i][1] += dy[direction];







            }
            //get final destination!

            //check if destination is doubled
            new_r = location[i][0];
            new_c = location[i][1];

            if (loc_temp[new_r][new_c] == -1)
            {
                loc_temp[new_r][new_c] = i;
            }
            else
            {
                //delete smaller shark
                int delete_shark = loc_temp[new_r][new_c];

                location[delete_shark][0]=-1;
                location[delete_shark][1]=-1;

                //add bigger shark
                loc_temp[new_r][new_c] = i;
            }
        }
    }
}

int main()
{
    init();

    int n = C;

    while (n--)
    {
        catch();
        move_eat();
    }

    printf("%d", fishman_sum);
}