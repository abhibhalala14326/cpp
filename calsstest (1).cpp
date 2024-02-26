

#include <iostream>
using namespace std;
class batsman
{
    private :
    int testcode;
    string description;
    int NoCandidate;
    int CenterReqd;
  int  calcntr()
  {
      return NoCandidate/100+1;
      }
    
    public :
    void schedule(){
    cout << "enter the testcode  "<<endl;
    cin >>testcode;
    cout << "enter the  description "<<endl;
    cin >> description ;
    cout << "enter the  NoCandidate"<<endl;
    cin >>  NoCandidate;

    CenterReqd=calcntr();
    }
   
    void showinfo()
    {
    //    cout<<"batmen code :"<<bcode<<endl;
       cout<<"enter the  testcode :"<<testcode<<endl;
       
       cout<<"description :"<<description<<endl;
       cout<<"NoCandidate :"<<NoCandidate<<endl;
       cout<<"CenterReqd: "<<CenterReqd<<endl;
      
    }
    
    
};

 
int main()
{
    batsman test;
    test.schedule();
 
    test.showinfo(); 
   

    return 0;
}


