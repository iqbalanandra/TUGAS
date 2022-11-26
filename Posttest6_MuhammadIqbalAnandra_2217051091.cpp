#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Ada berapa data ? :";
	cin >> n;
	int arr[n];
	
	bool tukar;

	for (int i = 0; i < n; i++)
	{
		cout << "Data Ke-" << i + 1 << " : ";
		cin >> arr[i];
	}

	int k;
	cout << "Data Sebelum Diurutkan : ";
	for (k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
	int temp;
	int BilanganTerakhir = n-1;

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
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << " ";
	}
}
