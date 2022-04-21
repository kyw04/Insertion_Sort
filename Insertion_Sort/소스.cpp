#include <iostream>
#define MAX 10
using namespace std;

void insertion_sort(int list[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = list[i];
		for (j = i; j > 0 && list[j - 1] > temp; j--)
			list[j] = list[j - 1];
		list[j] = temp;
	}
}
int main()
{
	int arr[MAX] = { 10, 4, 6, 3, 7, 9, 1, 5, 8, 2 };

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	insertion_sort(arr, MAX);

	for (int i = 0; i < MAX; i++)
		cout << arr[i] << ' ';
	cout << endl;

	return 0;
}