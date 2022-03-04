#include<iostream>
using namespace std;

int main()
{
    int n,min,min2,max,max2;
    int *list=new int[n];
    int *temp=new int[n];

    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>list[i];
    }

    for(int i=0;i<n;i++)
    {
        temp[i]=list[i];
    }


    min=temp[n];
    for(int i=0;i<n;i++)
    {
        if(temp[i]<min)
        min=temp[i];
    }
    min2=temp[0];
    for(int i=0;i<n;i++)
    {
        if(temp[i]<min2&&temp[i]>min)
        min2=temp[i];
    }
    
    cout<<"Second lowest: "<<min2;

    max=temp[0];
    for(int i=0;i<n;i++)
    {
        if(temp[i]>max)
        max=temp[i];
    }
    max2=temp[0];
    for(int i=0;i<n;i++)
    {
        if(temp[i]>max2&&temp[i]!=max)
        max2=temp[i];
    }

    cout<<"\nSecond highest: "<<max2;

    delete [] list;
    delete [] temp;

    
}