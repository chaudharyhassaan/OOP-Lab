//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    char name[50];
//    int* id;
//
//public:
//   
//    Student(const char n[], int value) {
//        int i = 0;
//        while (n[i] != '\0') {
//            name[i] = n[i];
//            i++;
//        }
//        name[i] = '\0';
//
//        id = new int;
//        *id = value;
//    }
//
//    
//    Student(const Student& obj) {
//        int i = 0;
//        while (obj.name[i] != '\0') {
//            name[i] = obj.name[i];
//            i++;
//        }
//        name[i] = '\0';
//
//        id = new int;
//        *id = *(obj.id);
//    }
//
//    void display() {
//        cout << "Name: " << name << ", ID: " << *id << endl;
//    }
//
//    ~Student() {
//        delete id;
//    }
//};
//
//int main() {
//    Student s1("Ali", 101);
//    Student s2 = s1;
//
//    s1.display();
//    s2.display();
//
//    return 0;
//}