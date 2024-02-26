#include<iostream>
using namespace std;
class complex{
int x,y;
 friend complex sumnumber(complex o1,complex o2 );
public:
void setdata (int a,int b)
{
   x=a;
   y=b; 
  
}
 
void print()
{
    cout <<"value x and value y :"<<x<<endl<<y<<endl;
}






};
complex sumnumber (complex o1,complex o2)
{
    
}

int main ()
{
    complex c1,c2,sum;
       c1.setdata(4,5);
       c1.print();

       c2.setdata(4,3);
       c2.print();

       sum= sumnumber(c1,c2);
sum.print();

return 0;

}



