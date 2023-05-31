
// PointerAndArray.c

#include <stdio.h>

// �迭�� ���� ������Ÿ���� ���Ҹ� ���������� ���ϰ� �ִ� ���� ���Ѵ�.
// �迭�� �ε���(index)��� ���� ���ϴµ�, �� �ε����� ���ؼ� �迭 ���ҿ� ������ �� �ִ�.
// �迭�� �̸��� &arr[0]�� �Ȱ��� �ǹ̸� ���Ѵ�. �� �����ּҴ� �迭�� �̸��̴�.

// �����ʹ� �̷��� �ּҸ� ���� �� �ִ�. �迭������ ���ۿ��Ҹ� �˸� ���Ŀ� �ֵ��� �˾Ƽ� ������ �� �ֱ� ������

int main(void)
{
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* ptrArr = arr;			// �迭�� �̸��� ���� �ּҸ� ����Ű�� �Ǵٸ� �ĺ����̱� ������ �ּ� �����ڰ� �ʿ����� �ʴ�.

	printf("arr[0] �� �ּ� %p / arr�� �ּ� %p\n", &arr[0], arr);
	printf("arr�� �� : %d %d\n", *arr, arr[0]);

	for (int i = 0; i < 5; ++i)
		printf("�ּҰ� [%p], arr[%d] : %d, *(a+%d) : %d\n",
			(arr + i), i, arr[i], i, *(arr + i));

	for (int i = 0; i < 5; ++i)
		printf("�ּҰ� [%p], ptrArr[%d] : %d, *(ptrArr+%d) : %d\n",
			(ptrArr + i), i, ptrArr[i], i, (*ptrArr += i));

	printf("%d\n", arr[0]);

	for (int i = 0; i < 5; ++i)
		printf("�ּҰ� [%p], arr[%d] : %d, *(a+%d) : %d\n",
			(arr + i), i, arr[i], i, *(arr + i));

	return 0;
}