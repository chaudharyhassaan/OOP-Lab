//# include <iostream>
//using namespace std;
//int main()
//{
//
//	const int maxsize = 10;
//	int arr[maxsize];
//
//	cout << "Enter elements for the array : \n";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << "\nOriginal Array : ";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cout << arr[i] << " ";
//	}
//
//	for (int i = 0; i < maxsize - 1; i++)
//	{
//		for (int j = 0; j < maxsize - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				swap(arr[j], arr[j + 1]);
//			}
//		}
//
//	}
//	
//	cout << "\nSorted Array : ";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cout  << arr[i] << " ";
//	}
//}