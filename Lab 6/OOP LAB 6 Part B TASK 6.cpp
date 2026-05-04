//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    int* marks;
//    int size;
//
//public:
//    
//    Student(int s) {
//        size = s;
//        marks = new int[size];
//    }
//
//    void inputMarks() {
//        for (int i = 0; i < size; i++) {
//            cout << "Enter marks for subject " << i + 1 << ": ";
//            cin >> marks[i];
//        }
//    }
//
//    void displayMarks() const {
//        cout << "Marks: ";
//        for (int i = 0; i < size; i++) {
//            cout << marks[i] << " ";
//        }
//        cout << endl;
//    }
//
//    ~Student() {
//        delete[] marks;
//    }
//};
//
//int main() {
//    Student s(5);
//
//    s.inputMarks();
//    s.displayMarks();
//
//    return 0;
//}