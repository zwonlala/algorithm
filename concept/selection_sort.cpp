//selection sort
//
//idea : 가장 작은 것은 선택해서 제일 앞으로 보내면 어떨까...?
//
//**시간복잡도 : O(N^2)
//설명 : 처음에 10개의 숫자를 비교, 그 다음 9개의 숫자를 비교,...
// 즉, 10, 9, 8, ... , 1개의 연산을 하고
// 이를 N으로 나타내면 총 N*(N+1)/2번의 연산을 함
// ∴ O(N^2)


#include <iostream>
using namespace std;

int main() {
	int i, j, min, index, temp; //index는 min 값의 index, temp는 두 값을 바꿀때 사용하는 변수
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

	for (i=0; i<10; i++) {
		min = 9999; //엄청 큰 값 설정(만약 위에 배열에 9999보다 큰 값있음 안됨)
		for (j=i; j<10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i]; //현재 i 번째 위치(찾은 min 값이 들어가야하는 위치)에 있는 값 temp에 저장
		array[i] = array[index];
		array[index] = temp;
	}


	//정렬 끝!
	for (i=0; i<10; i++) {
		printf("%d ", array[i]);
	}
	return 0;
}
