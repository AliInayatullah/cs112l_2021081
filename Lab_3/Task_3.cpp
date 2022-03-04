#include<iostream>
using namespace std;

int main()
{
    int n,j=0;
    int *list=new int[n];
    int *temp=new int[n];
    int *temp1=new int[n];

    cout<<"Enter Array size: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }

    for(int i=0,k=0;i<n;i++)
    {   
        if(list[i]>=0)
        {
        temp[j]=list[i];
        j++;
        }
        else
        {
        temp1[k]=list[i];
        k++;
        }
    }


    int k=0;
    for(int i=0;i<j;i++,k++)
    {
        list[k]=temp[i];
    }
    for(int i=0;i<n-j;i++,k++)
    {
        list[k]=temp1[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<list[i]<<" ";
    }

    delete [] list;
    delete [] temp;
    delete [] temp1;

}