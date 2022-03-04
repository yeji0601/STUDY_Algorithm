#include <iostream>
using namespace std;

#define SWAP(x, y, t) (t=x, x=y, y=t)

double L[15] = { 10, 4, 0, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };

void print_data(double L[], int n)
{
	for (int i = 0; i < n; i++)
		cout << " " << L[i];
	cout << endl;
}

void Max_heap(double L[], int root, int n)
{
	// ���⸦ ä�� �ϼ��Ͻÿ�. 

}

void HeapSort(double L[], int n)
{
	int i, temp;

	// �ִ� ���� ���� ����
	for (____________________; i >= 0; i--)
		Max_heap(L, i, n);	

	// ���� ����
	// ����ū��(0��° ����)�� ������(n-1��°)���� �ű�� �������� �ٽ� heap����
	for (_________________; i >= 0; i--)
	{
		//�� ���� L[0],L[i+1] ��ȯ
		SWAP(L[0], L[i + 1], temp);
		Max_heap(L, 0, i);
	}
}

void main()
{
	// ó�� ���¸� ������
	cout << "Input Data : ";
	print_data(L, 15);

	/* sort the elements of array L[] in ascending order */
	HeapSort(L, 15);

	// ���ĵ� ����� ������
	cout << "\nSorted Data : ";
	print_data(L, 15);

}
