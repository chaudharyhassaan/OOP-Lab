#include<iostream>
using namespace std;
int* InputArray(int& size)
{
	cout << "Enter the size of array: ";
	cin >> size;
	int* ptr = nullptr;
	ptr = new int[size];
	cout << "Enter array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> ptr[i];
	}
	return ptr;
}
void OutputArray(const int* ptr, const int& size) {

	for (int i = 0; i < size; i++)
	{
		cout << ptr[i];
	}
}
int* CompressArray(const int* ptr, const int& size, int& count)
{
	count = 1;

	for (int j = 1; j < size; j++)
	{
		if (ptr[j] != ptr[j - 1])
		{
			count++;
		}
	}
	int* ptr2 = new int[count];
	ptr2[0] = ptr[0];
	int j = 1;
	for (int i = 1; i < size; i++)
	{
		if (ptr[i] != ptr[i - 1])
		{
			ptr2[j] = ptr[i];
			j++;
		}
	}
	return ptr2;
}
int* Intersection(int* setA, int& size1, int* setB, int& size2, int& size3)
{

	int maxSize = size1 + size2;


	int* setC = new int[maxSize];

	size3 = 0;

	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (setA[i] == setB[j])
			{

				bool alreadyExists = false;
				for (int k = 0; k < size3; k++)
				{
					if (setC[k] == setA[i])
					{
						alreadyExists = true;
						break;
					}
				}

				if (!alreadyExists)
				{
					setC[size3] = setA[i];
					size3++;
				}
			}
		}
	}

	return setC;

}
int main()
{
	int* ptr = nullptr;
	int size;
	int count;
	ptr = InputArray(size);
	cout << endl;
	OutputArray(ptr, size);
	cout << endl;
	int* ptr2 = CompressArray(ptr, size, count);
	OutputArray(ptr2, count);

	int size1, size2, size3;

	cout << "Enter Size of Array: ";
	cin >> size1;

	int* A = new int[size1];

	cout << "Enter " << size1 << " elements: ";
	for (int i = 0; i < size1; i++)
		cin >> A[i];

	cout << "Enter Size of Array: ";
	cin >> size2;

	int* B = new int[size2];

	cout << "Enter " << size2 << " elements: ";
	for (int i = 0; i < size2; i++)
		cin >> B[i];



	int* C = Intersection(A, size1, B, size2, size3);
	OutputArray(C, size3);
}