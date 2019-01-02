#include<iostream.h>
using namespace std;

class box
{
 public:
 int l,b,h;
   int surfacearea();
   int volume();
   box operator++(int);
   box operator--(int);
   int operator==(box);
   box operator=(box);
   box check_shape();
   void input();
 box display();
 };

void box::input()
{cout<<"ENTER THE DIMENSIONS OF BOX :"<<"\n";
 cout<<"==============================";
 cout<<"\n"<<"ENTER THE LENGTH:";
 cin>>l;
 cout<<"\n"<<"ENTER THE BREADTH:";
 cin>>b;
 cout<<"\n"<<"ENTER THE HEIGHT :";
 cin>>h;
}

int box::surfacearea()
{
 int s;
 s=2*(l*b+b*h+h*l);
 cout<<"surface area"<<s<<"\n";
}

int box::volume()
{ 
  int v;
  v=l*b*h;
  cout<<"volume:"<<v<<"\n";
}

box box::check_shape()
{
 if(l==b==h)
 cout<<"THE BOX IS CUBE :)"<<"\n";
 else
 cout<<"THE BOX IS CUBOID :||"<<"\n";
}

int box::operator==(box o1)
{
  if(l==o1.l && b==o1.b && h==o1.h ) 
 return 1;
  else
  return 0;
}

box box::operator--(int)
{
box temp;
 temp.l=l--;
 temp.b=b--;
 temp.h=h--;
 return temp ;
}

box box::operator++(int)
{
box temp;
 temp.l=l++;
 temp.b=b++;
 temp.h=h++;
 return temp;
}

box box::operator=(box o1)
{
 l=o1.l;
 b=o1.b;
 h=o1.h;
 return o1;
 }
 
 box box::display()
 {
 
 cout<<l<<"/n"<<b<<"/n"<<h;
 }

int main()
{
 box o1,o2;
 o1.input();
 o2.input();
 o1.surfacearea();
 o2.surfacearea();
 o1.volume();
 o2.volume();
 o1.check_shape();
 o2.check_shape();
 if(o1==o2)
 cout<<"Dimensions of both boxes are equal";
 else
 cout<<"Dimensions are not equal";
 o1++;
 o1.display();
 o1--;
 o1.display();
 o1=o2;
 o1.display();
}

  

   
 

