

#include <iostream>
using namespace std;
class batsman
{
    private :
    int Flight;
    string Destination;
    float Distance;
    float fuel,t;
  void calfuel() 
  {
     if (Distance<=1000){
     t =500/fuel;
      }
      else if(Distance<=2000) {
        t = 1100 /fuel;
      }else 
      {
       t=2200/fuel;
      }
  } 
    
    public :
    void feedinfo(){
    cout << "enter the Flight code "<<endl;
    cin >>Flight;
    cout << "enter the  Destination name"<<endl;
    cin >>     Destination;

    cout << "enter the Distance"<<endl;
    cin >>Distance;
    cout << "enter the fuel"<<endl;
    cin>>fuel;
    
    calfuel();
    }
   
    void showinfo()
    {
       cout<<"Flight code :"<<Flight<<endl;
       cout<<" Destination :"<<Destination<<endl;
       
       cout<<"Distance :"<<Distance<<endl;
       cout<<"fuel :"<<fuel<<endl;
       cout<<"total fuel :"<<t<<endl;
       
    }
    
    
};

 
int main()
{
    batsman cs;
    cs.feedinfo();
 
    cs.showinfo(); 
   

    return 0;
}


