//
// Created by 송지원 on 2019-07-01.
//

#include <iostream>
using namespace std;

inline int abs(int input)   { return input>0? input: input*-1; }

void check_arr(int size);
int check_zero_existed(int size);
int count_normal(int size);
int get_state_arr(int arr[], int size);


int T; //T is num of test case
int N,K; //N is num of paper, K is num of color

int input[10000]; //arr for store colors

int main()
{
    int zero_check = -1;
    int pre_zero_start, zero_start, zero_end, post_zero_end = -1;
    int ANS;
    int state_arr[10000];
    int count;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        cin >> N >> K;

        for (int j=0; j<N; j++)
        {
            cin >> input[j];
        }
//        check_arr(N);

        input[0] = 1;
        input[N-1] = K;

        //0 앞 뒤로 같은 숫자가 있을 경우 0을 그 숫자로 바꿔준다
        for (int j=0; j<N; j++)
        {
            if (input[j]==0 && zero_check != 1)
            {
                pre_zero_start = j-1;
                zero_start = j;
                zero_check = 1;
            }

            if (input[j]!=0 && zero_check==1)
            {
                zero_end = j-1;
                post_zero_end = j;
                zero_check = 0;

                if (input[pre_zero_start]==input[post_zero_end])
                {
                    for (int ii=zero_start; ii<=zero_end; ii++)
                    {
                        input[ii] = input[pre_zero_start];
                    }
                }
            }
        }

//        check_arr(N);
//        cout << endl;

        //전처리를 하고 나니 0이 존재하지 않는 깔끔한 경우
        if (check_zero_existed(N) != 0)
        {
            ANS = count_normal(N);
            cout <<"#"<<(i+1)<<" "<<ANS<<endl;
        }
        //0이 존재하는 경우
        else
        {
            ANS = -1;
            count = get_state_arr(state_arr, N);
            int ANS_temp;

            //상태배열이 음수,양수,음수 즉 어떤 수 좌우로 0이 있을 경우 최댓값을 구한다
            for(int ii=1; ii<count-1; ii++)
            {
                //상태배열의 연속된 세 수 a,b,c
                int a = state_arr[ii-1];
                int b = state_arr[ii];
                int c = state_arr[ii+1];

                if (a*b*c>0 && a<0)
                {
                    ANS_temp = abs(a) + abs(b) + abs(c);
//                    cout<<"\t"<<a<<" "<<b<<" "<<c<<" "<<": "<<ANS_temp<<endl;

                    if (ANS_temp > ANS)
                    {
                        ANS = ANS_temp;
                    }
                }
            }


            //상태배열에 음수와 양수가 인접해 있을 경우, 즉 어떤 수 옆에 0이 있을 경우 최댓값을 구한다.
            for (int ii=0; ii<count-1; ii++)
            {
                //상태배열의 연속된 두 수 a,b
                int a = state_arr[ii];
                int b = state_arr[ii+1];

                if (a*b < 0)
                {
                    ANS_temp = abs(a) + abs(b);
//                    cout<<"\t"<<a<<" "<<b<<" "<<": "<<ANS_temp<<endl;


                    if (ANS_temp > ANS)
                    {
                        ANS = ANS_temp;
                    }
                }
            }

            cout <<"#"<<(i+1)<<" "<<ANS<<endl;
        }
    }

    return 0;
}






//디버깅용
void check_arr(int size)
{
    for (int i=0; i<size; i++)
    {
        cout << input[i];
        cout << " ";
    }
    cout << endl;
}

//input 배열안에 0이 존재하는지 검사하는 함수. 모든 요소를 곱해 리턴한다
int check_zero_existed(int size)
{
    int res=1;

    for (int i=0; i<size; i++)
    {
        res *= input[i];
    }
    return res;
}

//input 배열에 0이 아닌 값으로만 있는 경우 가장 많이 있는 수의 횟수를 리턴
int count_normal(int size)
{
    int num_count_temp=0;
    int num_count_max=-1;
    int num;

    num = 1;
    num_count_temp++;

    for (int i=1; i<size; i++)
    {
        //이전 숫자와 같을 경우
        if (num == input[i])
        {
            num_count_temp++;
        }
        //이전 숫자와 다를 경우
        else
        {
            num = input[i];
            num_count_temp = 1;
        }

        //현재 수 카운트가 더 크면 최댓값 갱신
        if (num_count_temp > num_count_max)
        {
            num_count_max = num_count_temp;
        }
    }

    return num_count_max;
}


int get_state_arr(int arr[], int size)
{
    int num=1;
    int num_count=1;
    int index=0;
    int count=0;
    int checked_num=1;

//    cout<<"\t[";
    for (int i=1; i<size; i++)
    {
        //만약 이전 수와 현재 수가 같아면 계속 센다
        if (num == input[i])
        {
//            cout<<i<<"번째 num:"<<num<<" == input[i]:"<<input[i]<<endl;
            num_count++;
        }
        //이전 수와 현재수가 다르면 기록하고 리셋
        else
        {
            //0사이에 한번도 안나온 숫자가 있는 경우
            if (input[i]-checked_num > 1 && input[i] != 0)
            {
                num_count -= (input[i]-checked_num-1);
            }

//            cout<<i<<"번째 num:"<<num<<" != input[i]:"<<input[i]<<endl;
            if (num > 0)
            {
                arr[index] = num_count;
            }
            else
            {
                arr[index] = num_count * -1;
            }
//            cout << arr[index]<<", ";

            num = input[i];
            num_count = 1;
            count++;

            index++;

            if (num != 0)
            {
                checked_num = num;
            }
        }

        //맨 마지막 체크인 경우
        if (i == size -1)
        {
            if (num > 0)
            {
                arr[index] = num_count;
            }
            else
            {
                arr[index] = num_count * -1;
            }
//            cout << arr[index]<<", ";

            count++;
        }

    }
//    cout<<"]"<<endl;
//    cout<<"count: "<<count<<endl;
    return count;
}

