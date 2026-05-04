//#include <iostream>
//using namespace std;
//
//class Operation
//{
//private:
//    int a, b;
//
//public:
//
//    Operation()
//    {
//        a = 0;
//        b = 0;
//    }
//
//    
//    Operation(int x, int y)
//    {
//        a = x;
//        b = y;
//    }
//
//    
//    int getA() { return a; }
//    int getB() { return b; }
//
//    
//    void setA(int x) { a = x; }
//    void setB(int y) { b = y; }
//
//    
//    inline void sum()
//    {
//        cout << "Sum = " << a + b << endl;
//    }
//
//    inline void difference()
//    {
//        cout << "Difference = " << a - b << endl;
//    }
//
//    inline void product()
//    {
//        cout << "Product = " << a * b << endl;
//    }
//
//    inline void division()
//    {
//        if (b != 0)
//            cout << "Division = " << a / b << endl;
//        else
//            cout << "Division not possible (b = 0)\n";
//    }
//};
//
//int main()
//{
//    Operation op1(10, 5);
//
//    op1.sum();
//    op1.difference();
//    op1.product();
//    op1.division();
//
//    return 0;
//}