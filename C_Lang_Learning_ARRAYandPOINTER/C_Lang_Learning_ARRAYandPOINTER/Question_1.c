
// 사용자로부터 총 6개의 정수를 입력 받는다. (배열로 받아야 됌)
// 입력 받은 정수를 void Odd함수와 void Even함수를 통해서 출력을 한다.
// 즉, Odd 함수를 호출하면 홀수만 출력이 되고,
// Even 함수를 호출하면 짝수만 출력이 된다.

// 실행 결과
// 6개의 정수 입력 >> 1 2 3 4 5 6
// 짝수 : 2 4 6
// 홀수 : 1 3 5

int main(void)
{
	int arr[6];

	printf("6개의 정수 입력 >> ");

	// scanf는 알아서 하셈

	Odd(arr, len);
	Even(arr, len);

	return 0;
}