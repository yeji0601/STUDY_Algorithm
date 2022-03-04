#include <iostream>
using namespace std;
/*선택정렬예제*/
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
	int i, j, max;
	int temp;

	for (i = SIZE - 1; i > 0; i--) {
		max = 0;
		/*최대값 탐색*/
		for (j = 1; j <= i; j++) {
			if (L[max] < L[j])
				max = j;
		}
		/*배열의 마지막 원소와 max 교환하기*/
		temp = L[max];
		L[max] = L[i];
		L[i] = temp;
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
