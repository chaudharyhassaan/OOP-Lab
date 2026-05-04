//#include <iostream>
//using namespace std;
//
//class Quadratic
//{
//private:
//    int a, b, c;
//
//public:
//    
//    Quadratic()
//    {
//        a = b = c = 0;
//    }
//
//    Quadratic(int x, int y, int z)
//    {
//        a = x;
//        b = y;
//        c = z;
//    }
//
//    
//    Quadratic(const Quadratic& q)
//    {
//        a = q.a;
//        b = q.b;
//        c = q.c;
//    }
//
//    
//    ~Quadratic() {}
//
//    
//    Quadratic operator+(const Quadratic& q)
//    {
//        return Quadratic(a + q.a, b + q.b, c + q.c);
//    }
//
//    Quadratic operator-(const Quadratic& q)
//    {
//        return Quadratic(a - q.a, b - q.b, c - q.c);
//    }
//
//    
//    Quadratic operator*(int k)
//    {
//        return Quadratic(a * k, b * k, c * k);
//    }
//
//    
//    Quadratic& operator=(const Quadratic& q)
//    {
//        a = q.a;
//        b = q.b;
//        c = q.c;
//        return *this;
//    }
//
//   
//    bool operator==(const Quadratic& q)
//    {
//        return (a == q.a && b == q.b && c == q.c);
//    }
//
//   
//    bool operator!=(const Quadratic& q)
//    {
//        return !(*this == q);
//    }
//
//  
//    friend istream& operator>>(istream& in, Quadratic& q)
//    {
//        cout << "Enter a, b, c: ";
//        in >> q.a >> q.b >> q.c;
//        return in;
//    }
//
//    
//    friend ostream& operator<<(ostream& out, const Quadratic& q)
//    {
//        out << q.a << "x^2 + " << q.b << "x + " << q.c;
//        return out;
//    }
//};
//
//int main()
//{
//    Quadratic q1, q2;
//
//    cin >> q1;
//    cin >> q2;
//
//    Quadratic q3 = q1 + q2;
//    Quadratic q4 = q1 - q2;
//    Quadratic q5 = q1 * 2;
//
//    cout << "\nAddition: " << q3 << endl;
//    cout << "Subtraction: " << q4 << endl;
//    cout << "Multiplication with 2: " << q5 << endl;
//
//    if (q1 == q2)
//        cout << "Equal\n";
//    else
//        cout << "Not Equal\n";
//
//    return 0;
//}