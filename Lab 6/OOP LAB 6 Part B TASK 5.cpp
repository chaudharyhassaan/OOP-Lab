//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    char name[50];
//    static int totalStudents;
//
//public:
//   
//    Student(const char n[]) {
//        int i = 0;
//        while (n[i] != '\0') {
//            name[i] = n[i];
//            i++;
//        }
//        name[i] = '\0';
//        totalStudents++;
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
//        totalStudents++;
//    }
//
//    const char* getName() const {
//        return name;
//    }
//
//    char* getName() {
//        return name;
//    }
//
//    static int getTotalStudents() {
//        return totalStudents;
//    }
//};
//
//int Student::totalStudents = 0;
//
//int main() {
//    Student s1("Ali");
//    Student s2("Ahmed");
//    Student s3 = s1; 
//
//    const Student s4("Sara");
//
//    cout << s4.getName() << endl;
//
//    cout << s4.Student::getName() << endl;
//
//    cout << "Total Students: "
//        << Student::getTotalStudents() << endl;
//
//    return 0;
//}