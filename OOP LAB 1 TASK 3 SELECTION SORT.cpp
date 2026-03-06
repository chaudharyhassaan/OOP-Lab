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
//	
//	cout << "\nOriginal Array : ";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	
//
//	for (int i = 0; i < maxsize - 1; i++)
//	{
//		int smallestindex = i;
//
//		for (int j = i + 1; j < maxsize; j++)
//		{
//			if (arr[j] < arr[smallestindex])
//			{
//				smallestindex = j;
//			}
//			
//		}
//		swap(arr[i], arr[smallestindex]);
//	}
//
//
//
//	cout << "\nSorted Array : ";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cout  << arr[i] << " ";
//	}
//
//
//
//
//}