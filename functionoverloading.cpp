#include<iostream>
using namespace std;
int area(int r)
{
 return (3.14*r*r);
}
int area(int l,int b)
{
 return (l*b);
}
double area(double bs,double ht)
{
 return ((bs*ht)/2);
}
int main()
{
 char choice;
 int x,y,ar;
 double a,b,ar1;
 cout<<"Enter your choice(circle c,rectangle r,triangle t):";
 cin>>choice;
 switch(choice)
 {
  case 'c':
  {
   cout<<"Enter radius of circle:";
   cin>>x;
   ar=area(x);
   cout<<"Area of Circle is:"<<ar;
   break;
  }
  case 'r':
  {
   cout<<"Enter length and breadth of rectangle:";
   cin>>x>>y;
   ar=area(x,y);
   cout<<"Area of Rectangle is:"<<ar;
   break;
  }
  case 't':
  {
   cout<<"Enter base and height of rectangle:";
   cin>>a>>b;
   ar1=area(a,b);
   cout<<"Area of Triangle is:"<<ar1;
   break; 
  }
  default:
  {
   cout<<"You have entered wrong choice";
   break;
  }
 }
}