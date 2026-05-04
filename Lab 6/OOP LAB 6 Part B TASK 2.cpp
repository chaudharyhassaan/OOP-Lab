//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//    char name[50];
//    static int count;
//
//public:
//    Employee(const char n[]) {
//        int i = 0;
//        while (n[i] != '\0') {
//            name[i] = n[i];
//            i++;
//        }
//        name[i] = '\0';
//
//        count++;
//    }
//
//    static int getCount() {
//        return count;
//    }
//};
//
//int Employee::count = 0;
//
//int main() {
//    Employee e1("Ali");
//    Employee e2("Ahmed");
//    Employee e3("Sara");
//
//    cout << "Total Employees: " << Employee::getCount() << endl;
//
//    return 0;
//}