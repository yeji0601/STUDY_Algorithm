#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for(int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void quick_sort(int L, int R)
{
	/* �� ���� �˸��� ������ �߰��Ͻÿ�. partition ����� ���⿡ �ڵ带 ���� �ְų�, ���� �Լ��� ���� ���� */
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */




}

void main()
{
	cout << "Input Data : ";
	print_data();
	
	/* sort the elements of array L[] in ascending order */
	quick_sort(0, SIZE-1);
	
	cout << "\n\nSorted Data : ";
	print_data();

}
