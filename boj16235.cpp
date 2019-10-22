//
// Created by 송지원 on 2019-04-06.
//

#include <stdio.h>

//class cell
//{
//    int yang;
//    int age;
//    bool die = false;
//
//};

typedef struct _cell
{
    int input=0;
    int yang=5;
    int age=0;
    bool die = false;

} CELL;

int main()
{
    int N, M, K;
//    cell cells [10][10];
//    cells = new cell[10][10];
    CELL cells [10][10];
    int A[10][10];
    int i,j;
    int a,b,c;
    int year;

//   scanf("%d %d %d ", &N, &M, &K);
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &K);

    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            scanf("%d ", &cells[i][j].input);
        }
    }

    for (i=0; i<M; i++)
    {
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        cells[a-1][b-1].age = c;
    }

//    //for check
//    printf("<yang>\n");
//    for (i=0; i<N; i++)
//    {
//        for (j=0; j<N; j++)
//        {
//            printf("%d ", cells[i][j].input);
//        }
//        printf("\n");
//    }
//
//    printf("<tree>\n");
//    for (i=0; i<N; i++)
//    {
//        for (j=0; j<N; j++)
//        {
//            printf("%d ", cells[i][j].age);
//        }
//        printf("\n");
//    }


    for (year=0; year<K; year++)
    {
        //spring

    }




}