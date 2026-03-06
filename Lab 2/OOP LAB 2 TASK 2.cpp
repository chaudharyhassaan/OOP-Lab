//# include <iostream>
//using namespace std;
//void populate_array(int** &my_array, int m, int n);
//void disp_array(int** &my_array, int m, int n);
//int** transpose_array(int** &my_array, int m, int n);
//int main()
//{
//	int** my_array = nullptr;
//
//	const int max = 100;
//	int m, n;
//	cout << "Enter the size of matrix m*n : \n";
//	cin >> m >> n;
//
//	int arr[max][max];
//
//	
//
//
//	populate_array(my_array, m, n);
//	cout << "Original Matrix : \n";
//	disp_array(my_array, m, n);
//
//	int ali = transpose_array(my_array, m, n);
//
//
//
//
//
//	return 0;
//
//}
//void populate_array(int** &my_array, int m, int n)
//{
//	my_array = new int* [m];
//
//	for (int i = 0; i < m; i++)
//	{
//		my_array[i] = new int[n] {};
//	}
//	cout << "Enter values for Matrix : \n";
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> my_array[i][j];
//		}
//	}
//}
//void disp_array(int** &my_array, int m, int n)
//{
//	
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout<<my_array[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//int** transpose_array(int** &my_array, int m, int n) 
//{
//	int** trans_array = nullptr;
//	trans_array = new int* [m];
//
//	for (int i = 0; i < m; i++)
//	{
//		trans_array[i] = new int[n] {};
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			trans_array[i][j] = my_array[j][i];
//		}
//	}
//	
//	
//	
//	disp_array(trans_array, m, n);
//
//	return 0;
//
//}
