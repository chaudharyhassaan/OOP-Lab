# include <iostream>
using namespace std;
class Stat
{
	int size;
	int* array;
public:
	Stat()
	{
		size = 0;
		array = nullptr;
	}
	int getsize()
	{
		return size;
	}
	int* getarray()
	{
		return array;
	}
	void setsize(int s)
	{
		size = s;
	}
	void setarray(int arr[],int s)
	{
		size = s;
		array = new int[size];
		for (int i = 0; i < size; i++)
		{
			array[i] = arr[i];
		}
	}
	friend double median(Stat obj);
	
};

double median(Stat obj)
{
	double median = 0.0;
	for (int i = 0; i < obj.size; i++)
	{
		if (obj.size % 2 == 1)
		{
			int center = obj.size / 2;
			median = obj.array[center];
		}
		else
		{
			int index1 = (obj.size - 1) / 2;
			int index2 = (obj.size / 2);
			median = (obj.array[index1] + obj.array[index2]) / 2.0;
		}
	}
	return median;
}
int main()
{

	Stat Obj1,Obj2;

	Obj1.setsize(9);
	Obj2.setsize(10);

	int array1[9] = { 1,2,3,4,5,6,7,8,9};
	int array2[10] = { 1,2,3,4,5,6,7,8,9,10};


	Obj1.setarray(array1,9);
	Obj2.setarray(array2,10);



	double median1 = median(Obj1);
	double median2 = median(Obj2);


	cout << "first Median = " << median1<<endl;
	cout << "Second Median = " << median2<<endl;

	return 0;
}