//# include <iostream>
//using namespace std;
//class Date
//{
//	int Day;
//	int Month;
//	int Year;
//public:
//	Date(int Day = 1,int Month = 1,int Year = 1926)
//	{
//		cout << "Default Constructor Called"<<endl;
//		this->Day = Day;
//		this->Month = Month;
//		this->Year = Year;
//	}
//	void print()
//	{
//		cout << Day << "/" << Month << "/" << Year<<endl;
//	}
//	void input()
//	{
//		cout << "Enter Day : ";
//		cin >> Day;
//		cout << "Enter Month : ";
//		cin >> Month;
//		cout << "Enter Year : ";
//		cin >> Year;
//	}
//	void setday(int Day)
//	{
//		this->Day = Day;
//	}
//	void setMonth(int Month)
//	{
//		this->Month = Month;
//	}
//	void setYear(int Year)
//	{
//		this->Year = Year;
//	}
//	int getDay()
//	{
//		return Day;
//	}
//	int getMonth()
//	{
//		return Month;
//	}
//	int getYear()
//	{
//		return Year;
//	}
//
//};
//int main()
//{
//
//	Date date1;
//	date1.print();
//	date1.input();
//	date1.print();
//
//	Date xmasday;
//	xmasday.print();
//	cout << endl;
//	xmasday.setday(25);
//	xmasday.setMonth(12);
//	xmasday.setYear(2026);
//	xmasday.print();
//
//	cout << xmasday.getDay() << " " << xmasday.getMonth() << " " << xmasday.getYear();
//
//
//	system("pause");
//	return 0;
//	
//}