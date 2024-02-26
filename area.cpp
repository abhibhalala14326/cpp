#include<iostream>
using namespace std ;

void area (int r)
{

cout <<"area of circle :"<<3.14*r*r<<endl;

}
void area (double a)
{

cout <<"area of a square :"<<a*a<<endl;

}
void area1 (double b,double h)
{

cout <<"area of a triangle :"<<b*h/2<<endl;

}
void area1 (long l,long w)
{

cout <<"area of a rectangle :"<<l*w<<endl;

}


int main(){
    area (5);
    area (5.0);
    area1 (5.0,5.0);
    area1 (4,5l);

}
