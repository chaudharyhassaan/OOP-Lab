#include<iostream>
using namespace std;

class Book {
	int id;
	string title;
	string author_name;
	int quantity_available;

public:

	Book()
	{
		id = 0;
		title = "";
		author_name = "";
		quantity_available = 0;
	}
	Book(int id, string title, string author_name, int quantity_available)
	{
		this->id = id;
		this->title = title;
		this->author_name = author_name;
		this->quantity_available = quantity_available;
	}
	void input()
	{
		cout << "Enter Book ID: " << endl;
		cin >> id;
		cout << "Enter title: " << endl;
		cin >> title;
		cout << "Enter Author's Name: " << endl;
		cin >> author_name;
		cout << "Enter Quantity: " << endl;
		cin >> quantity_available;
	}
	int getid()
	{
		return id;
	}
	string gettitle()
	{
		return title;
	}
	string getaname()
	{
		return author_name;
	}
	int getQTY()
	{
		return quantity_available;
	}

	void setid(int id)
	{
		this->id = id;
	}
	void settitle(string title)
	{
		this->title = title;
	}
	void setname(string author_name)
	{
		this->author_name = author_name;
	}
	void setQTY(int quantity_available)
	{
		this->quantity_available = quantity_available;
	}

	void output()
	{
		cout << "ID: " << id << endl;
		cout << "Title: " << title << endl;
		cout << "Book's Author: " << author_name << endl;
		cout << "Quantity available: " << quantity_available << endl;
		cout << endl;
	}
};

void newitem(int& findid, int& newQTY)
{
	cout << "Enter Book ID to search: ";
	cin >> findid;

	cout << "Enter new quantity: ";
	cin >> newQTY;
}

void UpdateBookQuantity(Book* b, int nofbooks, int findid, int newQTY)
{
	bool bookfound = false;
	for (int i = 0; i < nofbooks; i++)
	{
		if (b[i].getid() == findid)
		{
			b[i].setQTY(newQTY);
			cout << "Book Found!" << endl << "Quantity Updated Successfully." << endl;
			cout << "Updated Details: ";
			b[i].output();
			bookfound = true;
			break;
		}
	}
	if (!bookfound)
	{
		cout << "Book not Found!" << endl;
	}
}

int main()
{
	int nofbooks = 3;
	Book b[3];
	for (int i = 0; i < nofbooks; i++)
	{
		cout << "Details of Book " << i + 1 << endl;
		b[i].input();
	}
	cout << endl;

	cout << "Books In Library" << endl;

	for (int i = 0; i < nofbooks; i++)
	{
		cout << "Book " << i + 1 << endl;
		b[i].output();
	}
	
	int findid = 0, newQTY = 0;

	newitem(findid, newQTY);
	UpdateBookQuantity(b, nofbooks, findid, newQTY);

	cout << "Updated Library Info" << endl;
	for (int i = 0; i < nofbooks; i++) 
	{
		b[i].output();
	}

	return 0;
}