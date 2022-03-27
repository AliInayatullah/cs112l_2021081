#include <iostream>
#include <string>
using namespace std;

class Officer
{
private:
    static int count;
    int ID;
    string name;
    string rank;

public:
    void returnCount()
    {
        cout << "The number of officers is: " << count;
    }

    bool palindrome()
    {

        int num=ID;
        int temp;
        int temp2=0;
        while (num != 0)
        {
            temp = num % 10;
            num /= 10;
            temp2 =(temp2*10)+temp;
        }

        if (temp2 == ID)
            return false;
        else
            return true;
    }

    void inputOfficer()
    {
        cout << "Enter ID of Officer: ";
        cin >> ID;
        cout << "Enter the name of officer: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Rank of Officer: ";
        cin >> rank;

        count++;
    }
};

int Officer::count;

int main()
{

    Officer o1;
    int input = 0;
    do
    {
        cout << "\nPlease Select the desired option:" << endl
             << "1- Enter id of officer" << endl
             << "2- Get total number of officers" << endl
             << "3- Exit" << endl;

        cin >> input;

        switch (input)
        {
        case 1:
        {
            o1.inputOfficer();
            if (o1.palindrome())
                cout << "\nOfficer is allowed to enter the restricted area";
            else
                cout << "\nThe person is not allowed to enter the restricted area";

            break;
        }
        case 2:
        {
            o1.returnCount();
            break;
        }
        }

    } while (input != 3);
}