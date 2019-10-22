//
// Created by 송지원 on 2019-04-13.
//

#include <iostream>
#include <deque>
#include <algorithm>

void check();

using namespace std;

int n, m, k;
int a[10][10]; //yang input per year

deque<int> tree[10][10];
int yang [10][10];

int dx[8] = {-1, -1, -1, 0, 0, +1, +1, +1};
int dy[8] = {-1, 0, +1, -1, +1, -1, 0, +1};

int cnt;

int main()
{
    cin >> n >> m >> k;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cin >> a[i][j];
            yang[i][j] = 5;
        }
    }

    for (int i=0; i<m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        tree[x-1][y-1].push_back(z);
    }

    while (k--)
    {
        //spring & summer
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                for (int p=0; p<tree[i][j].size(); p++)
                {
                    if (tree[i][j][p] <= yang[i][j])
                    {
                        yang[i][j] -= tree[i][j][p];
                        tree[i][j][p]++;
                    }
                    else
                    {
                        int out = tree[i][j].size()-1;
                        int die;

                        for (; out>=p; out--)
                        {
                            die = tree[i][j][out] / 2;
                            yang[i][j] += die;
                            tree[i][j].pop_back();
                        }

                        break;
                    }
                }

            }
        }

        //fall
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                for (int p=0; p<tree[i][j].size(); p++)
                {
                    if (tree[i][j][p]%5 == 0)
                    {
                        for (int d=0; d<8; d++)
                        {
                            int nx = i + dx[d];
                            int ny = j + dy[d];

                            if (nx>=0 && nx<n && ny>=0 && ny<n)
                            {
                                tree[nx][ny].push_front(1);
                            }
                        }
                    }
                }
            }
        }

        //winter
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                yang[i][j] += a[i][j];
            }
        }
    }

    //answer count
    cnt = 0;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cnt += tree[i][j].size();

        }
    }

    cout<<cnt;


}

void check()
{
    //A[i][j]
    cout<<"\tA[i][j]"<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //yang
    cout<<"\tyang"<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            cout<<yang[i][j]<<" ";
        }
        cout<<endl;
    }

    //tree age
    cout<<"\t<tree age>"<<endl;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            for (int p=0; p<tree[i][j].size(); p++)
            {
                cout<<"tree["<<i+1<<"]["<<j+1<<"]["<<p+1<<"] age : "<<tree[i][j][p]<<endl;
            }

        }
    }
}
