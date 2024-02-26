

#include <iostream>
using namespace std;
class batsman
{
    
    int bcode;
    string bname;
    int innings, notout, runs;
    float batavg;
     
  void calcavg() 
  {
      batavg =runs/(innings-notout);
      
      }
    
    public :
    ~batsman ();
    void readata(){
    cout << "enter the batmen code "<<endl;
    cin >>bcode;
    cout << "enter the  batmen name"<<endl;
    cin >>bname;
    cout << "enter the innings"<<endl;
    cin >>innings;
    cout << "enter the notout"<<endl;
    cin>>notout;
    cout << "enter the run"<<endl;
    cin>>runs;
    calcavg() ;
  
    }
   
    void displaydata()
    {
       cout<<"batmen code :"<<bcode<<endl;
       cout<<"enter the  batmen :"<<bname<<endl;
       
       cout<<"innings :"<<innings<<endl;
       cout<<"notout :"<<notout<<endl;
       cout<<"runsa: "<<runs<<endl;
       cout<<"bataveg :"<<batavg<<endl;
       cout<<batavg<<endl;
    }
    
    
};
batsman :: ~batsman()
{

 displaydata();
}

 
int main()
{
    batsman cs;
    
     cs.readata();
   

    return 0;
}


