#include<iostream>
using namespace std;

#define read(type,x) type x;cin>>x;
#define power(num1,num2) int x=num1*(pow(2,num2));cout<<"The answer is: "<<x;

int pow(int x,int y)
{
    int l=x;
    for(int i=0;i<y;i++)
    {
        l=l*x;
    }
    return l;
}

int main()
{
    cout<<"Enter First Number: ";
    read(int,num1);
    cout<<"\nEnter Second Number: ";
    read(int,num2);
    power(num1,num2);


}
