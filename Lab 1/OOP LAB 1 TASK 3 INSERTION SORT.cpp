# include <iostream>
using namespace std;
int main()
{

	const int maxsize = 10;
	int arr[maxsize];

	cout << "Enter elements for the array : \n";
	for (int i = 0; i < maxsize; i++)
	{
		cin >> arr[i];
	}

	cout << "\nOriginal Array : ";
	for (int i = 0; i < maxsize; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < maxsize; i++)
	{
		int curr = arr[i];
		int prev = i - 1;

		while (prev >= 0 && arr[prev] > curr)
		{
			arr[prev + 1] = arr[prev];
			prev--;
		}
		arr[prev + 1] = curr;
	}


	cout << "\nSorted Array : ";
	for (int i = 0; i < maxsize; i++)
	{
		cout  << arr[i] << " ";
	}

}
	