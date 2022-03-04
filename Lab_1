#include<iostream>
#include<string>
using namespace std;


struct students
{
    string reg;
    string name;
    string degree_program;
    int courses_no;
    int marks;
    float SGPA;
    
};

const float A=4;
const float A_neg=3.67;
const float B_plus=3.33;
const float B=3;
const float B_neg=2.67;
const float C_plus=2.33;
const float C=2;



int main()
{  
     students no_stu[50];
     int number, course=0;
     cout<<"Enter the number of students: ";
     cin>>number;
     
     for(int i=0;i<number;i++)
     {
        float GPA=0;
        cout<<"Enter the record of student "<<i+1<<endl;
         cout<<"\nEnter the name: ";
         cin.ignore();
         getline(cin,no_stu[i].name);
         cout<<"\nEnter the reg.no: ";
         cin>>no_stu[i].reg;
         cout<<"\nEnter the degree program: ";
         cin.ignore();
         getline(cin,no_stu[i].degree_program);

         cout<<"Enter number of courses registered: ";
         cin>>course;
         for(int j=0;j<course;j++)
         {
             int temp=0;
         cout<<"Enter marks for course "<<j+1<<" :";
         cin>>temp;
         if(temp>86)
         GPA+=A;
         
         else if(temp>82)
         GPA+=A_neg;
         
         else if(temp>78)
         GPA+=B_plus;
         
         else if(temp>74)
         GPA+=B;
         
         else if(temp>70)
         GPA+=B_neg;
         
         else if(temp>66)
         GPA+=C_plus;
         
        }

         GPA=GPA/course;
        no_stu[i].SGPA=GPA;

        cout<<endl;


     }

        cout<<"S.No."<<"     "<<"Name"<<"     "<<"Reg.No"<<"     "<<"Degree Program"<<"     "<<"SGPA"<<endl;
    for(int k=0;k<number;k++)
    {
        cout<<k+1<<"         "<<no_stu[k].name<<"     "<<no_stu[k].reg<<"        "<<no_stu[k].degree_program<<"         "<<no_stu[k].SGPA<<endl;
    }
     

     for(int i=0;i<number;i++)
     {
         students temp;

         if(no_stu[i].SGPA>no_stu[i+1].SGPA)
         {
             temp=no_stu[i];
             no_stu[i]=no_stu[i+1];
             no_stu[i+1]=temp;

         }


     }

    
    int l,counter;
for(l=0;l<number;l++)
{
    if(no_stu[l].SGPA>no_stu[l+1].SGPA)
    counter=l;


}
cout<<"\n The Best Student is: ";
cout<<no_stu[l].name<<"     "<<no_stu[l].reg<<"        "<<no_stu[l].degree_program<<"         "<<no_stu[l].SGPA<<endl;


}



    

