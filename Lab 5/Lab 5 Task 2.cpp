#include<iostream>
//#include<cstring>
using namespace std;

class Task {
	string title;
	string desc;
	bool compStatus;

public:

	Task()
	{}

	Task(string title, string desc, bool compStatus)
	{
		this->title = title;
		this->desc = desc;
		this->compStatus = compStatus;
	}
	string gettitle()
	{
		return title;
	}
	string getdesc()
	{
		return desc;
	}
	bool getstatus()
	{
		return compStatus;
	}

	void settitle(string title)
	{
		this->title = title;
	}
	void setdesc(string desc)
	{
		this->desc = desc;
	}
	void setstatus(bool compStatus)
	{
		this->compStatus = compStatus;
	}

	void Complete()
	{
		setstatus(true);
	}
	void Incomplete()
	{
		setstatus(false);
	}

	void input()
	{
		cout << "Title: ";
		cin >> title;
		cout << "Description: ";
		cin >> desc;
		cout << "Status: ";
		cin >> compStatus;
		cout << endl;
		cout << endl;
	}
	void choice(int& choice)
	{
		cout << "Press 1 to mark task as Complete" << endl << "Press 0 to mark task as Incomplete" << endl;
		cout << "Enter your choice: ";
		cin >> choice;
		cout << endl << endl;
	}
	void print()
	{
		cout << "      Task Details      " << endl << endl;
		cout << "Title: " << title << endl;
		cout << "Description: " << desc << endl;
		cout << "Status " << compStatus << endl;
		cout << endl;
	}
};


void functionality(Task& t, int& choice)
{
	if (choice == 1)
	{
		t.Complete();
		cout << "Task Marked as Complete!" << endl << endl;
		cout << "Updated Task Details" << endl;
		t.print();
	}
	else if (choice == 0)
	{
		t.Incomplete();
		cout << "Updated Task Details" << endl;
		t.print();
	}
	else
	{
		cout << "Invalid Choice!" << endl;
	}
}


int main()
{
	Task t;
	t.input();
	t.print();

	int choice = 0;
	t.choice(choice);
	functionality(t, choice);

	









	return 0;
}