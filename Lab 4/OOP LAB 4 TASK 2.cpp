# include <iostream>
using namespace std;
class Angle
{
	int degrees;
	float minutes;
	char direction;
public:
	Angle(int degrees=0, float minutes=0.0, char direction='N')
	{
		this->degrees = degrees;
		this->minutes = minutes;
		this->direction = direction;

		cout << "Constructor is chaalling."<<endl;
	}
	void input()
	{
		cout << "Enter degrees : ";
		cin >> degrees;
		cout << "Enter Minutes : ";
		cin >> minutes;
		cout << "Enter Direction : ";
		cin >> direction;
	}
	void display()
	{
		cout << degrees << "\xF8" << minutes << "'"<< direction << endl;
	}
};
int main()
{
	Angle angl1;
	angl1.input();
	angl1.display();

	Angle angl2;
	





}