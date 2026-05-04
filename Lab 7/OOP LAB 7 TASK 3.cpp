//#include <iostream>
//using namespace std;
//
//class ComplexNumber
//{
//private:
//    int real;
//    int imaginary;
//    static int count;
//
//public:
//    ComplexNumber(int r = 0, int i = 0)
//    {
//        real = r;
//        imaginary = i;
//        count++;
//    }
//
//    ~ComplexNumber() {}
//
//    void Input()
//    {
//        cout << "Enter real and imaginary: ";
//        cin >> real >> imaginary;
//    }
//
//    void Output()
//    {
//        cout << real << " + " << imaginary << "i\n";
//    }
//
//    static int countDisplay()
//    {
//        return count;
//    }
//
//    bool IsEqual(ComplexNumber num)
//    {
//        return (real == num.real && imaginary == num.imaginary);
//    }
//
//    ComplexNumber Conjugate()
//    {
//        return ComplexNumber(real, -imaginary);
//    }
//
//    ComplexNumber operator+(const ComplexNumber& num)
//    {
//        return ComplexNumber(real + num.real, imaginary + num.imaginary);
//    }
//
//    ComplexNumber operator-(const ComplexNumber& num)
//    {
//        return ComplexNumber(real - num.real, imaginary - num.imaginary);
//    }
//
//    ComplexNumber operator*(const ComplexNumber& num)
//    {
//        return ComplexNumber(
//            real * num.real - imaginary * num.imaginary,
//            real * num.imaginary + imaginary * num.real);
//    }
//
//    
//    ComplexNumber& operator++()
//    {
//        real++;
//        return *this;
//    }
//
//    
//    ComplexNumber& operator--()
//    {
//        real--;
//        return *this;
//    }
//
//    
//    ComplexNumber operator++(int)
//    {
//        ComplexNumber temp = *this;
//        real++;
//        return temp;
//    }
//
//    
//    ComplexNumber operator--(int)
//    {
//        ComplexNumber temp = *this;
//        real--;
//        return temp;
//    }
//
//    bool operator>=(const ComplexNumber& num)
//    {
//        return (real >= num.real);
//    }
//
//    bool operator<=(const ComplexNumber& num)
//    {
//        return (real <= num.real);
//    }
//
//    bool operator!=(const ComplexNumber& num)
//    {
//        return !IsEqual(num);
//    }
//};
//
//int ComplexNumber::count = 0;
//
//int main()
//{
//    ComplexNumber c1(2, 3), c2(1, 4);
//
//    ComplexNumber c3 = c1 + c2;
//    ComplexNumber c4 = c1 * c2;
//
//    cout << "Addition: ";
//    c3.Output();
//
//    cout << "Multiplication: ";
//    c4.Output();
//
//    ++c1;
//    cout << "After increment: ";
//    c1.Output();
//
//    cout << "Total Objects: " << ComplexNumber::countDisplay() << endl;
//
//    return 0;
//}