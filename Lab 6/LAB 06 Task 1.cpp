//# include <iostream>
//using namespace std;
//class StringInfo
//{
//	char* str;
//	int length=0;
//
//public:
//	StringInfo(const char*string)
//	{
//		cout << "Constructor is called and string is deep copied.\n";
//		
//		for (int i = 0; string[i] != '\0'; i++)
//		{
//			length++;
//		}
//
//		str = new char[length + 1];
//
//		for (int j = 0; string[j] != '\0'; j++)
//		{
//			str[j] = string[j];
//		}
//
//		str[length] = '\0';
//
//	}
//	~StringInfo()
//	{
//		cout << "Destructor is called and dynamic memory is freed.\n";
//		delete[] str;
//	}
//
//	void display()
//	{
//		cout << "String: " << str << endl;
//		cout << "Length: " << length << endl;
//	}
//
//};
//int main()
//{
//	StringInfo s1("Hello World");
//	s1.display();
//
//	cout << endl;
//
//	StringInfo s2("OOP in C++");
//	s2.display();
//
//
//	system("pause");
//	return 0;
//}