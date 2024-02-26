#include<iostream>
#include<string>
using namespace std;
class singeline
{
int enno;
string name;
public:
   
   void marks1()
   {
    cout <<"enter the enno :"<<endl;
    cin>>enno;
    cout <<"enter the name :"<<endl;
    cin>>name;
   }
   void s4()
   {
cout<<"enno : "<<enno<<endl;
cout<<"name :"<<name<<endl;
   }
   

};
class s2 :public singeline
{
public:
float marks[5];
   float total=0;
   float pre;
  
 void data()
   {
    marks1();
    for (int i=0;i<5;i++)
    {
        cout<<"enter the five sub marks"<<endl;
        cin>>marks[i];
        total+=marks[i];
        pre=total/500*100;


    }
   }
   void showdata()
   {
   s4();
   for (int i=0;i<5;i++)
    {
        cout<<"  marks  :"<<marks[i]<<endl;
        
    }
   cout<<"total marks : "<<total<<endl;
   cout<<"pre :"<<pre<<endl;

   }
};
int main ()


{

s2 a;
a.data();
a.showdata();
return 0;
   
}