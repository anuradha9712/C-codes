#include<iostream.h>
#define pi 3.14
void AREA(int radius,float &area);
void CIRCUM(int radius,float &circum);
int main()
{
int radius;
float area,circum;
cout<<"Enter the radius of circle:";
cin>>radius;
AREA(radius,area);
CIRCUM(radius,circum);
cout<<"area of circle:"<<area<<"\n"<<"circumference of circle:"<<circum;
}

void AREA(int radius,float &area)
{
  area=pi*radius*radius;
}

void CIRCUM(int radius,float &circum)
{
  circum=2*pi*radius;
}
  
  
  

