

#include <iostream>
using namespace std;
class book
{
    
    int bookno;
    string booktitle;
    float prece;
   int total;
   int n;
 void total_cost()
  {
    
       float tcost;
       tcost=prece*n;
       
     cout<<tcost<<endl;
      }
    
    public :
    book();
    void input(){
    cout << "enter the bookno  "<<endl;
    cin >>bookno;
    cout << "enter the  booktitle "<<endl;
    cin >> booktitle ;
    cout << "enter the   prece"<<endl;
    cin >>  prece;
    cout<<"enter the "<<endl;
    cin>>n;

   
    }
   
    void purechase()
    {
    //    cout<<"batmen code :"<<bcode<<endl;
       cout<<"enter the  testcode :"<<bookno<<endl;
       
       cout<<"description :"<<booktitle<<endl;
       cout<<"NoCandidate :"<<prece<<endl;
       cout<<"total prece :";
       total_cost();
      
    }
    
    
    
};
book :: book()
{
    input();
}

 
int main()
{
    book test;
   
 
    test.purechase(); 
   

    return 0;
}


