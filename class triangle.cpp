#include<iostream.h>
#include<math.h>
using namespace std;

class triangle
{
 int x,y,z;
 float area,s;
 public:
 
  triangle()
   { x=y=z=-1; }
   
  void compute(int x);
  void compute(int x,int y);
  void compute(int x,int y,int z);
  void display();
  void operator=(triangle);
  int operator==(triangle);
  
};

void triangle::compute(int x1)
{
  x=x1;
  area= 0.43*x*x;
}  

void triangle::compute(int x1, int y1)
{ 
 x=x1;
 y=y1;
 float s;
 s=(2*x+y)/2.0;
 area=sqrt(s*(s-x)*(s-y)*(s-x));
}

void triangle::compute(int x1,int y1,int z1)
{
 x=x1;
 y=y1;
 z=z1;
 float s;
 s=(x+y+z)/2.0;
 area=sqrt(s*(s-x)*(s-y)*(s-z));
}

void triangle::display()
{
  int count=0;
  if(x!=-1)
  {
    cout<<"the side is:"<<x<<"\n";
      count++ ;
  }

  if (y!=-1)
  {
    cout<<"the side is:"<<y<<"\n";
     count++ ;
  }

 if (z!=-1)
  {
    cout<<"the side is:"<<z<<"\n";
     count++ ;
  }

  if(count==1)
  {
  cout<<"equilataral triangle:"<<"\n";
  }

  else if(count==2)
  {
   cout<<"isosceles triangle:"<<"\n";
   }
 
  else
  {
   cout<<"scalen triangle:"<<"\n";
   }
  cout<<"area :"<<area<<"\n";
}
void triangle::operator=(triangle t2)
{ if(t2.x!=-1)
  x=t2.x;
  else
   x=-1;
  if(t2.y!=-1)
  y=t2.y;
  else
   y=-1;
 if(t2.z!=-1)
  z=t2.z;
 else
   z=-1;
   area=t2.area;
}
int triangle::operator==(triangle t2)
{
  if(x==t2.x && y==t2.y && z==t2.z)
  return 1;
  else
   return 0;

}

int main()
{
 triangle t1,t2,t3;
 int a,x,y,z;
 char ch;
 
do{
 cout<<"===which triangle u want==="<<"\n";
 cout<<"1.area of equilatoral triangle:"<<"\n";
 cout<<"2.area of isosceles triangle:"<<"\n";
 cout<<"3.area of scalen triangle:"<<"\n";
 cout<<"4.operator =:";
 cin>>a;
 switch(a)
 {
  case 1:cout<<"enter the side of triangle="<<"\n";
         cin>>x;
		 t1.compute(x);
		 t1.display();
		 break;
  case 2:cout<<"enter the sides of triangle="<<"\n";
         cin>>x>>y;
		 t2.compute(x,y);
		 t2.display();
		 break;	   	    
 case 3:cout<<"enter the sides of triangle="<<"\n";
         cin>>x>>y>>z;
		 t3.compute(x,y,z);
		 t3.display();
		 break;
  case 4: 
   
    t1=t2;
    cout<<"t1\n";
    t1.display();
    cout<<"t2\n";
    t2.display();
    if(t1==t2)
    { cout<<"areas equal"<<"\n";}
      else
	  cout<<"areas are not equal"<<"\n";
	  break;
    		 
  default: cout<<"==wrong choice entered==";
  }
cout<<"do u want to continue?:"<<"\n";
cin>>ch;
} while(ch=='y');
return 0;
}

 

