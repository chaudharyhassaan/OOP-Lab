#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int studentId;
public:
    Student(const string& name, int studentId) : name(name), studentId(studentId) {}
    string getName() const { return name; }
    int getStudentId() const { return studentId; }
};

class Course {
private:
    string courseName;
    Student* students[100];
    int count;
public:
    Course(const string& courseName) : courseName(courseName), count(0) {}

    void addStudent(Student* student) {
        students[count++] = student;
    }

    void displayStudents() const {
        for (int i = 0; i < count; i++) {
            cout << students[i]->getName() << " " << students[i]->getStudentId() << endl;
        }
    }
};

int main() {
    Student student1("John Smith", 12345);
    Student student2("Jane Doe", 54321);
    Course mathCourse("Mathematics");
    mathCourse.addStudent(&student1);
    mathCourse.addStudent(&student2);
    mathCourse.displayStudents();
    return 0;
}