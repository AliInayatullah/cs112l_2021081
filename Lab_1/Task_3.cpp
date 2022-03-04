#include<iostream>
#include<string>

using namespace std;

struct DOB
{
int day;
string month;
int year;

};

struct users
{
 string name;
 int age;
 DOB date;
 string city;
};


int main()
{
users list[50];
int number;
cout<<"Enter number of users: ";
cin>>number;
for(int i=0;i<number;i++)
{
cout<<"ENTER RECORD OF USER ";
cout<<"\nEnter name: ";
cin.ignore();
getline(cin,list[i].name);

cout<<"\nEnter age: ";
cin>>list[i].age;

cout<<"\nEnter City: ";
cin.ignore();
getline(cin,list[i].city);

cout<<"\nENTER D.O.B\n";
cout<<"Enter day: ";
cin>>list[i].date.day;

cout<<"Enter month: ";
cin.ignore();
getline(cin,list[i].date.month);

cout<<"Enter year: ";
cin>>list[i].date.year;

cout<<endl;

}

DOB td;
td.day=14;
td.month="Feb";


int counter=0;

for(int i=0;i<number;i++)
{
    if(list[i].date.day==td.day)
        if(list[i].date.month==td.month)
            counter=i;
}
cout<<"\nIt is "<<list[counter].name<<"'s Birthday."<<" HAPPY BITHDAY, "<<list[counter].name;

}