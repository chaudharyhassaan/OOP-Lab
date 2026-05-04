#include <iostream>
using namespace std;

class Customer {
public:
    int id;
    string name;
    string email;
    string phone;

    Customer() {}

    Customer(int i, string n, string e, string p) {
        id = i;
        name = n;
        email = e;
        phone = p;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
        cout << endl;
    }
};

void CreateCustomerProfile(Customer* customers, int& count, int id, string name, string email, string phone) {
    customers[count] = Customer(id, name, email, phone);
    count++;
}

int main() {
    int maxSize = 100;
    Customer* customers = new Customer[maxSize];
    int count = 0;

    CreateCustomerProfile(customers, count, 1, "Ali", "ali@gmail.com", "03001234567");
    CreateCustomerProfile(customers, count, 2, "Ahmed", "ahmed@gmail.com", "03111234567");
    CreateCustomerProfile(customers, count, 3, "Sara", "sara@gmail.com", "03221234567");

    for (int i = 0; i < count; i++) {
        customers[i].display();
    }

    delete[] customers;
    return 0;
}