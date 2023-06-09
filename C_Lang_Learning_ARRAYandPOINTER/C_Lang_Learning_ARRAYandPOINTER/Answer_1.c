#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 사용자로부터 총 6개의 정수를 입력 받는다. (배열로 받아야 함)
// 입력 받은 정수를 void Odd함수와 void Even함수를 통해서 출력을 한다.
// 즉, Odd 함수를 호출하면 홀수만 출력이 되고,
// Even 함수를 호출하면 짝수만 출력이 된다.

//실행결과
//6개의 정수 입력 >> 1 2 3 4 5 6
// 짝수 : 2,4,6
//홀수 : 1,3,5
void Odd(int* arr, int len);
void Even(int* arr, int len);

int main(void)
{
    int arr[6];
    int len = sizeof(arr) / sizeof(int);
    int input = 0;

    printf("6개의 정수를 입력하셔야합니다.\n");
    for (int i = 0; i < len; ++i)
        scanf("%d", &arr[i]);
 
    Even(arr, len);
    Odd(arr, len);

    return 0;
}

void Odd(int* arr, int len)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }
}

void Even(int* arr, int len)
{
    for (int i = 0; i < len; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
}