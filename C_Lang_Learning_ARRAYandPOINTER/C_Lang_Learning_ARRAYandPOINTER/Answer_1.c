#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ����ڷκ��� �� 6���� ������ �Է� �޴´�. (�迭�� �޾ƾ� ��)
// �Է� ���� ������ void Odd�Լ��� void Even�Լ��� ���ؼ� ����� �Ѵ�.
// ��, Odd �Լ��� ȣ���ϸ� Ȧ���� ����� �ǰ�,
// Even �Լ��� ȣ���ϸ� ¦���� ����� �ȴ�.

//������
//6���� ���� �Է� >> 1 2 3 4 5 6
// ¦�� : 2,4,6
//Ȧ�� : 1,3,5
void Odd(int* arr, int len);
void Even(int* arr, int len);

int main(void)
{
    int arr[6];
    int len = sizeof(arr) / sizeof(int);
    int input = 0;

    printf("6���� ������ �Է��ϼž��մϴ�.\n");
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