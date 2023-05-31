
// PointerAndArray_Function.c

#include <stdio.h>

void ElementsAdded(int* arrPtr, int len);
void ArrayElementsPrint(int* arrPtr, int len);

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	// 20�� 4�� ����� 5�� ������ �ȴ�.
	int len = sizeof(arr) / sizeof(int);
	
	ArrayElementsPrint(arr, len);
	
	ElementsAdded(arr, len);

	ArrayElementsPrint(arr, len);

	return 0;
}

// �迭�� ���ҿ� ���� 10�� �����ִ� �Լ�
void ElementsAdded(int* arrPtr, int len)
{
	for(int i = 0; i < len; ++i)
	{
		arrPtr[i] += 10 * (i + 1);
	}
}

void ArrayElementsPrint(int* arrPtr, int len)
{
	for (int i = 0; i < len; ++i)
		printf("%d ", arrPtr[i]);			// �����ʹ� �迭ó�� �ε����� ����ؼ��� ������ �����ϴ�.
	printf("\n");
}