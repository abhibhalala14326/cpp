

#include <iostream>
using namespace std;
class report
{
    private :
    int adnm;
    string name;
    float marks[5];
   float avg;
   int n;
 void getavg()
  {
    int i;
 
    for ( i=0;i<5;i++)
      {
        cin>>i[marks];
        avg+=i[marks];
      }
      
    

     
      };
    
    public :
    void input(){
    cout << "enter the bookno  "<<endl;
    cin >> adnm;

    cout << "enter the  booktitle "<<endl;
    cin >> name ;
    cout << "enter the  marks "<<endl;
    getavg();

   
    };
   
    void purechase()
    {
    //    cout<<"batmen code :"<<bcode<<endl;
       cout<<"enter the  testcode :"<<adnm<<endl;
       
       cout<<"description :"<<name<<endl;
       
      cout<<"total avg :"<<avg<<endl;
      
    };
    
    
    
};

 
int main()
{
    report test;
    test.input();
 
    test.purechase(); 
   

    return 0;
}


