//#include <iostream>
//using namespace std;
//
//class Person {
//private:
//    char name[50];
//
//public:
//    Person(const char n[]) {
//        int i = 0;
//        while (n[i] != '\0') {
//            name[i] = n[i];
//            i++;
//        }
//        name[i] = '\0';
//    }
//
//    const char* getName() const {
//        return name;
//    }
//
//    char* getName() {
//        return name;
//    }
//};
//
//int main() {
//    Person p1("Ali");
//    const Person p2("Ahmed");
//
//   
//
//    cout << "Const Object Name: " << p2.getName() << endl;
//
//    
//    cout << "Using scope resolution: "
//        << p2.Person::getName() << endl;
//
//    return 0;
//}