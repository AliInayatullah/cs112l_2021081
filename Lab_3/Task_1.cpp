#include<iostream>
using namespace std;


int main()
{
    int n;
    int *list=new int[n];
    int *temp=new int[n];

    cout<<"Enter number of values in list: ";
    cin>>n;
    cout<<"Enter "<<n<<" values: ";

    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }

    for(int i=0;i<n;i++)
    {
        temp[i]=list[i];
    }

    delete [] list;
    list=temp;

    for(int i=0;i<n;i++)
    {
        list[i]=temp[i+1]-temp[i];
    }

    for(int i=0;i<n-1;i++)
    {
        cout<<list[i]<<" ";
    }
    delete [] temp;


}