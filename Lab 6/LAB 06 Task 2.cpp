//# include <iostream>
//# include <cstring>  
//using namespace std;
//class StringArray 
//{
//	char** strings;
//	int size=0;
//
//public:
//	StringArray(int arraySize) 
//	{
//		// Constructor to initialize the StringArray with a given size
//		size = arraySize;
//
//		strings = new char* [size];
//
//		for (int i = 0; i < size; i++) 
//		{
//			strings[i] = nullptr;
//		}
//	}
//	~StringArray() 
//	{
//		// Destructor to free the dynamically allocated memory 
//		for (int i = 0; i < size; i++) 
//		{
//			delete[] strings[i];
//		}
//		delete[] strings;
//	}
//	void setString(int index, const char* str) 
//	{
//		 
//		if (index < 0 || index >= size) {
//			cout << "Invalid index!" << endl;
//			return;
//		}
//
//		
//		delete[] strings[index];
//
//		
//		int len = strlen(str);
//		strings[index] = new char[len + 1];
//
//
//		
//		strcpy(strings[index], str);
//	}
//	const char* getString(int index) 
//	{
//		// Method to get the string at a specific index 
//		if (index < 0 || index >= size) 
//		{
//			return "Invalid index";
//		}
//		if (strings[index] == nullptr)
//		{
//			return "Empty";
//		}
//
//
//		return strings[index];
//	}
//};
//int main()
//{
//	StringArray stringArray(3);
//	stringArray.setString(0, "Hello");
//	cout << "String at index 0: " << stringArray.getString(0) <<endl;
//
//	
//	return 0;
//}