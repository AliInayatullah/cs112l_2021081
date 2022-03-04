#include<iostream>
using namespace std;

#define read(type,x) type x;cin>>x;
#define pow(bool) if(bool){cout<<"Yes it is power of 2";}else cout<<"No it is not a power of 2";
bool power(int x);


int main()
{   
    cout<<"Enter an integer: ";
    read(int,x);
    pow(power(x));

    
}

bool power(int x)
 { 
     bool check=false;
     int l=2;
     for(int i=0;i<x/2;i++)
     {
         l=l*2;
         if(l==x)
         {check=true; break;}

     }
     return check;

}









// void bin(int x)
// {
//     cout<<bitset<16>((int)x);   
// }
