
// TwoDimension_Array.c

#include <stdio.h>

// 2���� �迭
/*
* x�� y�� ���� �������� ��Ʈ����(Matrix)�� �����ϸ� �ȴ�.
* 
* ����/���ΰ� �����ϴ� ���̳� ��Ʈ �� �ٹ�鿡�� Ȱ��ȴ�.
* 
*/

int main(void)
{
	// 2���� �迭�� ���� �� �ʱ�ȭ ���
	int TwoArr1[3][3];
	int TwoArr2[2][2] = {
		{1, 2},
		{3, 4}
	};
	int TwoArr3[][4] = {		// ���� ������ �� �ִ�. ������ ���� ������ �� ����.
		{10, 20, 30, 40},
		{50, 60, 70, 80}
	};
	int TwoArr4[][4] = {
		3, 6, 9, 12, 15, 18, 21, 24
	};
	int TwoArr5[][4] = {		// �������� 0���� �ʱ�ȭ �ȴ�.
		{1},
		{2, 3}
	};

	// 2���� �迭�� ���� �ݺ������ �� ���̳� �ٸ��� ����.
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 4; ++j)
			printf("[%d][%d] = [%d]", i, j, TwoArr3[i][j]);
		printf("\n");
	}

	// rows �� cols, ���ο� ���� ũ�� ���ϱ� 
	// 
	// int(4byte) * 8 = 32byte (TwoArr3�� ��ü ũ��)
	// 2 * 4 ����̴ϱ� column�� ũ��� �󸶰� ���;ߴ�? 
	// cols�� ���� 4�� ���;ߵȴ� ��ġ?
	int cols = sizeof(TwoArr3[0]) / sizeof(int);
	int rows = sizeof(TwoArr3) / sizeof(TwoArr3[0]);

	// �迭�� ���� �� Length�� �׻� ��Ʈ�̴�.
	// �𸣸��? �ݺ����� ���� ���� ���ڳ� ���� �� ���� ���̾ƴ� ������ ��� ����� ���� ����������,
	// Ȯ���ϰ� �ϱ� ���ؼ��� �迭�� ���̸� ���ؼ� ����ϴ� ���� �Ϲ����̴�.
	printf("Rows : %d / Cols : %d\n", rows, cols);

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
			printf("%d ", TwoArr3[i][j]);
		printf("\n");
	}

	return 0;
}