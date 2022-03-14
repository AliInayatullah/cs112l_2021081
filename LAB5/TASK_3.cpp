#include <iostream>
#include <string>
using namespace std;

class stringType
{

private:
    string first;
    string second;
    int length1;
    int length2;

public:
    stringType()
    {
        first = "";
        second = "";
        length1 = 0;
        length2 = 0;
    }

    void setValues(string str1, string str2)
    {
        length1 = 0;
        length2 = 0;
        first = str1;
        second = str2;
    }
    void print()
    {
        cout << "\nfirst: " << first;
        cout << "\nsecond: " << second;
    }

    int maxLength()
    {
        int i = 0;
        while (first[i] != '\0')
        {
            i++;
            length1++;
        }
        int j = 0;
        while (first[j] != '\0')
        {
            j++;
            length2++;
        }

        if (length1 > length2)
            return length1;
        else
            return length2;
    }

    void copy(string source, string dest)
    {
        string temp;
        int i = 0;
        while (source[i] != '\0')
        {
            temp[i] = source[i];
            i++;
        }

        dest = source;

        cout << "The string was copied to destination";
        cout << endl
             << "source: " << source << endl
             << "destination: " << dest;
    }

    int compare()
    {
        int sum1 = 0;
        int sum2 = 0;
        int length;
        bool chk = true;
        if (length1 > length2)
            length = length1;
        else
            length = length2;

        for (int i = 0; i < length; i++)
        {
            if (first[i] != second[i])
            {
                chk = false;
                break;
            }
        }
        for (int i = 0; i < length; i++)
        {
            if (first[i] != '\0')
                sum1 += first[i];

            if (second[i] != '\0')
                sum2 += second[i];
        }

        if (chk)
            return 0;
        else if (sum1 > sum2)
            return 1;
        else
            return -1;
    }

    string concatenate()
    {
        int l = 0;
        bool chk = false;
        string temp;

        int length = 0;
        if (length1 > length2)
            length = length1;
        else
            length = length2;

        for (int i = 0; i < length; i++)
        {
            if (first[i] == '\0')
            {
                chk = true;
                temp[i] = first[i];
            }

            if (chk)
            {
                temp[i] = second[l];
                l++;
            }

            if (second[l] == '\0')
            {
                break;
            }
        }
        return temp;
    }

    int searchWord(string word)
    {
        bool check = false;
        bool check2 = false;
        int counter = 0;
        int counter2 = 0;
        int counter3 = 0;
        int i = 0;

        while (word[i] != '\0')
        {
            counter3++;
            i++;
        }

        int length = 0;
        if (length1 > length2)
            length = length1;
        else
            length = length2;

        for (int i = 0; i < length; i++)
        {
            if (first[i] == word[i] && counter != counter3)
            {
                check = true;
                counter++;
            }
            else
            {
                check = false;
                counter = 0;
            }

            if (second[i] == word[i] && counter2 != counter3)
            {
                check2 = true;
                counter++;
            }
            else
            {
                check2 = false;
                counter2 = 0;
            }
        }

        if (check2 || check)
            return 1;
        else
            return 0;
    }

    int searchChar(char c)
    {
        bool chk = false;
        int length = 0;
        if (length1 > length2)
            length = length1;
        else
            length = length2;

        for (int i = 0; i < length; i++)
        {
            if (first[i] == c)
            {
                chk = true;
                break;
            }
            else
                chk = false;

            if (second[i] == c)
            {
                chk = true;
                break;
            }
            else
                chk = false;
        }
        if (chk)
            return 1;
        else
            return 0;
    }

    ~stringType()
    {
        delete &first;
        delete &second;
        delete &length1;
        delete &length2;
    }
};

int main()
{
    int num;
    stringType temp;

    do
    {
        cout << "\nMENU" << endl
             << "1-setvalues\n"
             << "2-compare\n"
             << "3-copy\n"
             << "4-concatenate\n"
             << "5-Search word\n"
             << "6-Search char\n"
             << "7-Print\n"
             << "0-Exit\n";

        cin >> num;
        switch (num)
        {
        case 1:
        {
            string a;
            string b;
            cout << "\nEnter string 1: \n";
            cin.ignore();
            getline(cin, a);
            cout << "\nEnter string 2: \n";
            getline(cin, b);
            temp.setValues(a, b);
            temp.maxLength();
            break;
        }
        case 2:
        {
            if (temp.compare() == 0)
            {
                cout << "They are equal";
            }
            else if (temp.compare() == 1)
            {
                cout << "First is greater";
            }
            else
            {
                cout << "Second is greater";
            }
        }
        break;
        case 3:
        {
            string a;
            string b;
            cout << "\nEnter source string: \n";
            cin.ignore();
            getline(cin, a);
            cout << "\nEnter destination string: \n";
            getline(cin, b);
            temp.copy(a, b);
            break;
        }
        break;
        case 4:
        {
            cout << temp.concatenate() << endl;
        }
        break;
        case 5:
        {
            string a;
            cout << "Enter a word to search: ";
            cin >> a;
            if (temp.searchWord(a))
                cout << "The word does Exist in one of the strings.";
            else
                cout << "The word does not exist in either of the strings.";
        }
        break;
        case 6:
        {
            char a;
            cout << "Enter a character to search: ";
            cin >> a;
            if (temp.searchChar(a))
                cout << "The character does Exist in one of the strings.";
            else
                cout << "The character does not exist in either of the strings.";
        }
        break;
        case 7:
        {
            temp.print();
        }
        break;
        case 0:
        {
            cout << "Exited";
            break;
        }
        default:
            cout << "Invalid Input!";
        }
    } while (num != 0);

    return 0;
}
