#include <iostream>
using namespace std;

class Heater
{

private:
    int temperature;

public:
    Heater() // constructor
    {
        temperature = 15;
    }

    void warmer()
    {
        temperature += 5;
    }

    void cooler()
    {
        temperature -= 5;
    }

    void print()
    {
        cout << "\nThe temperature is: " << temperature << endl;
    }

    ~Heater()
    {
        delete &temperature;
    }
};

int main()
{
    int num;
    Heater temp;

    do
    {
        cout << "\nMENU" << endl
             << "1-Show temperature\n"
             << "2-Increase temperature\n"
             << "3-Decrease tempreature\n"
             << "0-Exit\n";
        cin >> num;
        switch (num)
        {
        case 1:
            temp.print();
            break;
        case 2:
            temp.warmer();
            break;
        case 3:
            temp.cooler();
            break;
        case 0:
            cout << "Exited";
            break;
        default:
            cout << "Invalid Input!";
        }
    } while (num != 0);
}