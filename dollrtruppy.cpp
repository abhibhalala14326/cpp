#include<iostream>
using namespace std ;

void convwed(double a)
{
    cout<<"ruppys :"<<a*82.99<<endl;
}
void convwed(int a)

{
cout<<"feet :"<<a*12<<endl;
}
void convwed(float c)
{
cout <<"celsius"<<(c*9/5)+32<<endl;
}
void convwed(long a)
{
cout <<a/1000<<endl;
}
int main (){
convwed(10.0);
convwed(12);
convwed(23.4f);
convwed(1000l);
}