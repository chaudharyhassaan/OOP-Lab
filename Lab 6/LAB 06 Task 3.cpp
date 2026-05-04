#include <iostream>
#include <cstring>
using namespace std;

class StringHolder
{
private:
    char* string_ptr;

public:

    // Constructor
    StringHolder(const char* str)
    {
        int len = strlen(str);
        string_ptr = new char[len + 1];
        strcpy(string_ptr, str);
    }

    // Deep Copy Constructor
    StringHolder(const StringHolder& other)
    {
        int len = strlen(other.string_ptr);
        string_ptr = new char[len + 1];
        strcpy(string_ptr, other.string_ptr);

        cout << "Deep Copy Constructor Called\n";
    }

    //  Shallow Copy Constructor 
    StringHolder(StringHolder& other, bool shallow)
    {
        if (shallow)
        {
            string_ptr = other.string_ptr; 
            cout << "Shallow Copy Constructor Called\n";
        }
    }

    
    void setString(const char* str)
    {
        delete[] string_ptr;

        int len = strlen(str);
        string_ptr = new char[len + 1];
        strcpy(string_ptr, str);
    }

    // Display
    void display()
    {
        cout << "String: " << string_ptr << endl;
    }

    // Destructor
    ~StringHolder()
    {
        delete[] string_ptr;
    }
};

int main()
{
    // Original object
    StringHolder obj1("Hello");

    // Deep copy
    StringHolder obj2 = obj1;

    // Shallow copy
    StringHolder obj3(obj1, true);

    cout << "\n--- Initial Values ---\n";
    obj1.display();
    obj2.display();
    obj3.display();

    // Modify original
    obj1.setString("Changed");

    cout << "\n--- After Changing obj1 ---\n";
    obj1.display();

    obj2.display();// unaffected (deep copy)

    obj3.display(); // affected (shallow copy)

    return 0;
}