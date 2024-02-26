#include<iostream>
using namespace std;
class part{
int x,y;
public:
 part (int a,int b)
{
   x=a;
   y=b; 
   
}
 part operator +()
{
   x=x-(x*2);
   y=y-(y*2);
}
void print()
{
    cout <<"value x and value y :"<<x<<endl<<y<<endl;
}






};

int main ()
{
    part a(2,8);
+a;
a.print();
return 0;

}