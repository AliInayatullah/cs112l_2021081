#include <iostream>
using namespace std;

class Swap
{
private:
    int A;
    int B;

public:
    void setter()
    {
        cout << "Enter Value for A: ";
        cin >> A;
        cout << "\nEnter Value for B: ";
        cin >> B;
    }

    void swap()
    {
        A=A+B;
        B=A-B;
        A=A-B;
    }


    void print()
    {
        cout << "\nBefore Swapping A= " << B << " & B=" << A;
        cout << "\nBefore Swapping B= " << A << " & B=" << B;
    }
};

int main()
{
    Swap test;
    test.setter();
    test.swap();
    test.print();
}