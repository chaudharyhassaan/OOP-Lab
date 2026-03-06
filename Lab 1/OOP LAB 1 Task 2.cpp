//# include <iostream>
//using namespace std;
//int main()
//{
//	const int maxsize = 10;
//
//	int tar;
//
//	int arr[maxsize];
//
//	bool found = false;
//
//	cout << "Enter values of Array (sorted):\t";
//	for (int i = 0; i < maxsize; i++)
//	{
//		cin >> arr[i];
//	}
//
//	cout << "Enter Target value for search:\t";
//	cin >> tar;
//
//	int mid = maxsize / 2;
//
//	int start = 0;
//	int end = 9;
//
//	
//
//
//
//
//	while (start <= end)
//	{
//		int mid = start+(end - start) / 2;
//
//		if (arr[mid] == tar)
//		{
//			found = true;
//			break;
//		}
//		if (arr[mid] < tar)
//		{
//			start = mid + 1;
//		}
//		if (arr[mid] > tar)
//		{
//			end = mid - 1;
//
//		}
//	}
//	
//	if (found)
//	{
//		cout << "\nTarget Found" << endl;
//	}
//	else
//		cout << "\nTarget not found";
//
//
//
//
//
//
//
//
//}