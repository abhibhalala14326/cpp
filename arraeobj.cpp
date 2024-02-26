#include<iostream>
using namespace std;
class complex{
int adnm;
float marks;
string name;

 
public:

 void data()
 {
    cout<<"name"<<endl;
    cin>>name;
    cout<<"admn"<<endl;
    cin>>adnm;
    cout<<"3 sub marks"<<endl;
    cin>>marks;
 

   
 }
 void print()
 {
    
 


     cout<<"name"<<name<<endl;
     cout<<"admn"<<adnm<<endl;
     cout<<"sub marks"<<marks<<endl;
}






};


int main ()
{
    complex c1[3];



    for(int i=0;i<2;i++)
    {
        
     c1[i].data();
    }
      
      c1[0].print();

return 0;

}



