//#include <iostream>
//#include <string>
//using namespace std;
//
//class Author {
//private:
//    string name;
//    string email;
//    char gender;
//public:
//    Author(const string& name, const string& email, char gender)
//        : name(name), email(email), gender(gender) {
//    }
//
//    string getName() const { return name; }
//    string getEmail() const { return email; }
//    void setEmail(const string& email) { this->email = email; }
//    char getGender() const { return gender; }
//
//    void print() const {
//        cout << name << " (" << gender << ") at " << email << endl;
//    }
//};
//
//class Book {
//private:
//    string name;
//    Author author;
//    double price;
//public:
//    Book(const string& name, Author* author, double price)
//        : name(name), author(*author), price(price) {
//    }
//
//    Author getAuthor() const { return author; }
//
//    void print() const {
//        cout << "'" << name << "' by ";
//        author.print();
//    }
//};
//
//int main() {
//    Author peter("Peter Jones", "peter@somewhere.com", 'm');
//    peter.print();
//
//    Book book("C++ for Dummies", &peter, 19.99);
//    book.print();
//
//    peter.setEmail("peter@xyz.com");
//    peter.print();
//    book.print();
//
//    book.getAuthor().setEmail("peter@abc.com");
//    book.print();
//
//    return 0;
//}