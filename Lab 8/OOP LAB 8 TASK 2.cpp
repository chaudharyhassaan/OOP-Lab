# include <iostream>
# include <string>
using namespace std;
class Author
{
	string name;
	string email;
	char gender;
public:
	Author(const string& name, const string& email, char gender);
	string getName() const;
	string getEmail() const;
	void setEmail(const string& email);
	char getGender() const;
	void print() const;
};
Author::Author(const string& name, const string& email, char gender)
{
	this->name = name;
	this->email = email;
	this->gender = gender;
}
string Author::getName() const
{
	return name;
}
string Author::getEmail() const
{
	return email;
}
void Author::setEmail(const string& email)
{
	this->email = email;
}
char Author::getGender() const
{
	return gender;
}
void Author::print() const
{
	cout << name << " (" << gender << ") at " << email << endl;
}






class Book
{
	string name;
	Author author;
	double price;
	int qtyInStock = 0;
public:
	Book(const string& name, const Author& author, double price, int qtyInStock = 0);
	string getName() const;
	Author getAuthor() const;
	double getPrice() const;
	void setPrice(double price);
	int getQtyInStock() const;
	void setQtyInStock(int qtyInStock);
	void print() const;
	string getAuthorName() const;
};
Book::Book(const string& name, const Author& author, double price, int qtyInStock): author(author) 
{ 
	this->name = name;
	this->price = price;
	this->qtyInStock = qtyInStock;
}

string Book::getName() const 
{ 
	return name; 
}

Author Book::getAuthor() const 
{ 
	return author; 
}

double Book::getPrice() const 
{ 
	return price;
}

void Book::setPrice(double price) 
{
	this->price = price;
}

int Book::getQtyInStock() const 
{
	return qtyInStock;
}

void Book::setQtyInStock(int qtyInStock) 
{ 
	this->qtyInStock = qtyInStock;
}

string Book::getAuthorName() const 
{
	return author.getName(); 
}

void Book::print() const
{
	cout << "'" << name << "' by ";
	author.print();
	cout << "Price: $" << price << ", Quantity: " << qtyInStock << endl;
}
int main()
{
	
	Author peter("Peter Jones", "peter@somewhere.com", 'm');
	peter.print(); 

	Book book("C++ for Dummies", peter, 19.99);
	book.print();
	
	peter.setEmail("peter@xyz.com");
	peter.print(); 
	book.print();
	
	book.getAuthor().setEmail("peter@abc.com");
	book.print();
	return 0;
}
