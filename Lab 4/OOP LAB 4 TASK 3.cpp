#include <iostream>
using namespace std;

class tollBooth
{
private:
    int totalCars;
    double totalCash;

public:
    
    tollBooth()
    {
        totalCars = 0;
        totalCash = 0.0;
    }

  
    void payingCar()
    {
        totalCars++;
        totalCash += 0.50;
    }

   
    void nopayCar()
    {
        totalCars++;
    }

   
    void display() const
    {
        cout << "\nTotal Cars: " << totalCars << endl;
        cout << "Total Cash: $" << totalCash << endl;
    }
};

int main()
{
    tollBooth booth;
    char ch;

    cout << "Press 'p' for paying car\n";
    cout << "Press 'n' for non-paying car\n";
    cout << "Press 'e' to exit and display totals\n\n";

    while (true)
    {
        cout << "Enter choice: ";
        cin >> ch;

        if (ch == 'p' || ch == 'P')
            booth.payingCar();
        else if (ch == 'n' || ch == 'N')
            booth.nopayCar();
        else if (ch == 'e' || ch == 'E')
        {
            booth.display();
            break;
        }
        else
            cout << "Invalid input. Try again.\n";
    }

    return 0;
}
