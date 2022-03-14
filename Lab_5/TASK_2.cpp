#include <iostream>
using namespace std;

class parity
{

private:
    int items;
    int *arr;

public:
    parity()
    {
        items = 0;
        arr = new int[items];
    }

    void put(int num)
    {
        int *temp = new int[items + 1];
        for (int i = 0; i < items; i++)
        {
            temp[i] = arr[i];
        }
        temp[items] = num;

        delete[] arr;
        arr = temp;
        items++;
    }

    void print()
    {
        for (int i = 0; i < items; i++)
        {
            cout << arr[i] << " ";
        }
    }
    void Delete()
    {
        int *temp = new int[items - 1];
        for (int i = 0; i < items - 1; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;

        arr = temp;
        items--;
    }

    int test()
    {
        if (items % 2 == 0)
            return 0;
        else
            return 1;
    }

    ~parity()
    {
        delete[] arr;
        delete &items;
    }
};

int main()
{
    int num;
    parity temp;

    do
    {
        cout << "\nMENU" << endl
             << "1-Put\n"
             << "2-Print\n"
             << "3-Delete\n"
             << "4-Test\n"
             << "0-Exit\n";
        cin >> num;
        switch (num)
        {
        case 1:
        {
            cout << "\nEnter number to put\n";
            int num1;
            cin >> num1;
            temp.put(num1);
            break;
        }
        case 2:
        {
            temp.print();
            break;
        }
        case 3:
            temp.Delete();
            break;
        case 4:
        {
            if (temp.test())
                cout << "FALSE";
            else
                cout << "TRUE";
            break;
        }
        case 0:
        {
            cout << "Exited";
            break;
        }
        default:
            cout << "Invalid Input!";
        }
    } while (num != 0);
}
