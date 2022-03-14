#include <iostream>
using namespace std;

class twoDArray
{
private:
    const static int SIZE = 5;
    int A[SIZE][SIZE];
    int B[SIZE][SIZE];
    int C[SIZE][SIZE];

public:
    void Initialize()
    {
        cout << "Enter 25 values to initialize the matix: ";
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cin >> A[i][j];
                B[i][j] = A[i][j];
            }
        }
    }

    void Print()
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }

    void Transpose()
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j < SIZE; j++)
            {
                A[i][j] = B[j][i];
            }
        }
    }

    void isSymmetry()
    {
        bool check = true;
        {
            for (int i = 0; i < SIZE; i++)
            {
                for (int j = 0; j < SIZE; j++)
                {
                    if (A[i][j] != A[j][i])
                    {
                        check = false;
                        break;
                    }
                    else
                        check = true;
                }
            }
        }
        if (check)
            cout << "Matrix is Symmetric!";
        else
            cout << "Matrix is not Symetric";

        cout << endl;
    }

    twoDArray multiply(twoDArray obj1, twoDArray obj2)
    {
        twoDArray obj3;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; i < SIZE; j++)
            {
                for (int k = 0; k < SIZE; k++)
                {
                    obj3.C[i][j] *= 0;
                    obj3.C[i][j] += obj1.A[i][k] * obj2.A[k][i];
                }
            }
        }

        return obj3;
    }
};

int main()
{

    twoDArray Array;
    int num;
    do
    {
        cout << "Menu\n"
             << "1-Print            3-Transpose"
             << "\n2-Initialize       4-isSymmetry"
             << "\n5-Multiply\n";

        cin >> num;

        switch (num)
        {
        case 1:
            Array.Print();
            break;
        case 2:
            Array.Initialize();
            break;
        case 3:
            Array.Transpose();
            break;
        case 4:
            Array.isSymmetry();
            break;
        case 5:
            twoDArray arr1;
            twoDArray arr2;
            arr1.Initialize();
            arr2.Initialize();
            Array.multiply(arr1, arr2);
            break;
        default:
            cout << "Invalid input!";
        }
    } while (1);
}