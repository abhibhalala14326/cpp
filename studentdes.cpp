

#include <iostream>
using namespace std;
class student
{
   
    int admnumber;
    string name;
    float eng,scince,math;
    float total;
   void prit(float eng1,float scince1,float math1,float total1 );
    
    public :
    ~student();
    void Takedata(){
    cout << "enter the eng admnumber"<<endl;
    cin >>admnumber;
    cout << "enter the  name"<<endl;
    cin >>name;
    cout << "enter the eng marks"<<endl;
    cin >>eng;
    cout << "enter the scince marks"<<scince<<endl;
    cin>>scince;
    cout << "enter the eng math"<<math<<endl;
    cin>>math;
    }
    void ctotal()
    {
       total=eng+scince+math;
       
       cout <<"total marks :"<< total;
    }
    void showdata()
    {
       cout<<"admin number is :"<<admnumber<<endl;
       cout<<"stdent name :"<<name<<endl;
       
       cout<<"eng marks :"<<eng<<endl;
       cout<<"scince marks :"<<scince<<endl;
       cout<<"math marksd: "<<math<<endl;
       cout<<"total print :"<<total<<endl;
    }
    
    
};

void student :: prit (float eng1,float scince1,float math1,float total1 )
{
    eng=eng1;
    scince=scince1;
    math=math1;
    total = total1;
    cout << "enter the eng marks"<<endl;
    cin >>eng;
    cout << "enter the scince marks"<<scince<<endl;
    cin>>scince;
    cout << "enter the eng math"<<math<<endl;
    cin>>math;
    
    
    
    }
    student :: ~student()

    {
     
     
showdata();
    }
 
int main()
{
    student s;
    
 s.Takedata();
   s.ctotal();
  
   

    return 0;
}


