#include<iostream>
#include<string>

using namespace std;

class Cordinator;

class Person{

    private:
    string uni;
    string comp;

    public:

    void input()
    {
        cout<<"Enter the competetion and University: ";
        cin>>comp;
        cin>>uni;
    
    }

    friend class Cordinator;

};

class Cordinator{

    private:
    Person p1;
    Person p2;

    public:

    int roomnum(Person,Person);

    void message(Person , Person );

};

void Cordinator::message(Person p1,Person p2)
{
    if(p1.uni.compare(p2.uni))
        cout<<"Message from the coordinator Person 1 and Person 2 are not roommates";
    else
        cout<<"Message from the coordinator Person 1 and Person 2 are roomates and room number is "<<roomnum(p1,p2);
    

}

int Cordinator::roomnum(Person p1, Person p2)
{
    if(p1.comp.length()>p2.comp.length())
        return p1.comp.length();
    else
        return p2.comp.length();
        
}



int main()
{
    Person p1,p2;
    p1.input();
    p2.input();

    Cordinator c;

    c.message(p1,p2);


}