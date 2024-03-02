#include<iostream>
#include<string>
using namespace std;

class p1
{
int enno;
string name;
public :
void id()
{
    cout<<"enter the enno number :"<<endl;
    cin>>enno;
    cout<<"enter the name : "<<endl;
    cin>>name;
}
void sd()
{
    cout<<"enno :"<<enno<<endl;
    cout<<"name : "<<name<<endl;
}
};

class c1 
{
public :

int marks[3];
float total=0;
float per;
void marks1(){
 for (int i=0;i<3;i++)
{
cout<<"enter the martks :"<<endl;
cin>>marks[i];
total+=marks[i];
per=total*300/100;
}
}
void sd2()
{
    for (int i=0;i<3;i++)
{
cout<<"enter the martks :"<< marks[i] <<endl;
}
cout<<"total marks :"<<total<<endl;
cout<<"per : "<<endl;
}





};
class c2 :public c1,public p1
{
    public :
    void show()
    {
sd();
sd2();



    }
};
int main ()
{

c2 obj;
obj.id();
obj.marks1();
obj.show();


    return 0;
}