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

void sort()
{
	/* �� ���� �˸��� ������ �߰��Ͻÿ�. */
	/* �Է� ����Ÿ�� L[]�� ��� ������, ��ü ���� ������ SIZE�̴�. */
	int sort;//���ĵ� �� ���� ����
	for (int i = 0; i < SIZE ; i++) {
		for (int j = i + 1; j < SIZE ; j++) {
			if (L[i] > L[j]) {
				sort = L[j];
				L[j] = L[i];
				L[i] = sort;
			}
		}
	}


}

void main()
{
	cout << "Input Data : ";
	print_data();
	
	/* sort the elements of array L[] in ascending order */
	sort();
	
	cout << "\n\nSorted Data : ";
	print_data();

}
