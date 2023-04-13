#include <iostream>
using namespace std;

int main()
{
	int arr[5];
	bool tukar;

	for (int i = 0; i < 5; i++)
	{
		cout << "Data Ke-" << i + 1 << " : ";
		cin >> arr[i];
	}

	int k;
	cout << "Data Sebelum Diurutkan : ";
	for (k = 0; k < 5; k++)
	{
		cout << arr[k] << " ";
	}
	int temp;
	int BilanganTerakhir = 4;

	do
	{
		tukar = false;
		for (int j = 0; j <= BilanganTerakhir; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

				tukar = true;
			}
		}
		BilanganTerakhir--;

	} while (tukar);
	cout << endl
		 << "Data Sesudah diurutkan : ";
	for (int j = 0; j < 5; j++)
	{
		cout << arr[j] << " ";
	}
}
