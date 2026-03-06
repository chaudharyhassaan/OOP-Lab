# include <iostream>
using namespace std;
int main()
{
	int num1 = 5;
	int num2 = 7;
	int sum = 0;

	int* xptr = nullptr;
	int* yptr = nullptr;
	int* sumptr = nullptr;


	//First Output
	cout << "Num1 = " << num1 << "\nNum2 = " << num2 << endl;

	//Second output

	xptr = &num1;
	yptr = &num2;

	cout << "\nAddress of Num1 = " << xptr << "\nAddress of Num2 = " << yptr << endl;

	//dereference

	cout << "\nDereferenced Value of xptr : " << *xptr << "\nDerefernced Value of yptr : " << *yptr << endl;

	//sumptr

	sumptr = &sum;

	cout << "\nDereferenced Value of Sumptr : " << *sumptr;

	//add num1 and num2 

	sum = *xptr + *yptr;

	cout << "\nDereferenced Value of Sumptr after addition : " << *sumptr<<endl;

	//xptr and yptr

	cout << "\nAddress of xptr : " << xptr << "\nAddress of yptr : " << yptr;

}