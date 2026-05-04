# include <iostream>
using namespace std;
class Shape
{
protected:
	string type;

public:
	virtual void areaCalculator(){}
	virtual void printvartype()
	{
		cout << "String is :" << type<<endl;
	}
};
class Rectangle : public Shape
{
	float height;
	float width;

public:
	Rectangle(float h=0.0, float w=0.0)
	{
		height = h;
		width = w;
	}
	void printvartype()
	{
		cout << " Rectangle String is :" << type << endl;
	}

	void areaCalculator()
	{
		float area = height * width;
		cout << "Area of Rectangle is :" << area << endl;
	}
};
class Triangle : public Shape
{
	float base;
	float height;

public:
	Triangle(float b=0.0,float h=0.0)
	{
		base = b;
		height = h;
	}
	void printvartype()
	{
		cout << "Triangle String is :" << type << endl;
	}

	void areaCalculator()
	{
		float area = (base * height)/2 ;
		cout << "Area of Triangle is :" << area << endl;

	}

};
class Circle : public Shape
{
public:
	float radius;

	Circle(float r=0.0)
	{
		radius = r;
	}
	void printvartype()
	{
		cout << "Circle String is :" << type << endl;
	}
	void areaCalculator()
	{
		float area = 3.14 *radius * radius;
		cout << "Area of Circle is :" << area << endl;
	}
};
int main()
{
	Rectangle R1;
	Triangle T1;
	Circle C1;

	Shape* S1;


	

	
		S1 = new Rectangle(3.0,2.2);
		S1->areaCalculator();
	
		S1 = new Triangle(5.0,8.9);
		S1->areaCalculator();
	
	
		S1 = new Circle(7.8);
		S1->areaCalculator();
	
	
	return 0;
}
