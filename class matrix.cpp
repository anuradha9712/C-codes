#include<iostream.h>
#include<conio.h>
class matrix
{int a[20][20],x,y;
public:
void get();
void put();
matrix add(matrix);
matrix sub(matrix);
matrix mul(matrix);
matrix transpose();
};
void matrix::get()
{cout<<"enter the order of matrix\n"<<"rows:"<<"\n";
cin>>x;
cout<<"columns:";
cin>>y;
cout<<"enter the matrix elements\n";
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
cin>>a[i][j];}

void matrix::put()
{cout<<"answer is:\n";
for(int i=0;i<x;i++)
{cout<<"\n";
for(int j=0;j<y;j++)
cout<<a[i][j]<<" ";
}
}

matrix matrix::add(matrix b)
{
matrix r;
if((x!=b.x)||(y!=b.y))
{cout<<"natrix addition is not possible";
r.x=0;
r.y=0;
}
else
{r.x=x;
r.y=y;
}
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
r.a[i][j]=a[i][j]+b.a[i][j];
return r;
}

matrix matrix::sub(matrix b)
{ matrix r;
if((x!=b.x)||(y!=b.y))
{cout<<"matrix subtraction is not possible";
r.x=0;
r.y=0;
}
else
{r.x=x;
r.y=y;}
for(int i=0;i<x;i++)
for(int j=0;j<y;j++)
r.a[i][j]=a[i][j]-b.a[i][j];
return r;
}


matrix matrix::mul(matrix b)
{matrix r;
if((x!=b.y)||(y!=b.x))
{cout<<"multiplication is not possible";
  r.x=0;
  r.y=0;}
  else
  {r.x=x;
  r.y=b.y;
  }
  for(int i=0;i<20;i++)
  for(int j=0;j<20;j++)
  r.a[i][j]=0;
  for(int i=0;i<x;i++)
  for(int j=0;j<b.y;j++)
  for(int k=0;(k<y)||(k<b.x);k++)
  r.a[i][j]+=a[i][k]*b.a[k][j];
  
  return r;
  }
  
  matrix matrix::transpose()
  { matrix r;
  for(int i=0;i<x;i++)
  for(int j=0;j<y;j++)
  r.a[i][j]=a[j][i];
  r.x=x;
  r.y=y;
  return r;
  }
  
  int main()
  {
  int op;
  matrix a,b,c; 
 
  //int t=1;
  //while(t)
  char ch='y';
  do
  {
  cout<<"\n select operation\n";
  cout<<"\n1. matrix addition";
  cout<<"\n2. matrix subtraction";
  cout<<"\n3. matrix multiplication";
  cout<<"\n4. matrix transpose";
  cout<<"\n5. exit \n";
  cin>>op;
  switch(op)
  {
  case 1:cout<<"\n ====matrix addition====";
            a.get();
             b.get();
             c=a.add(b);
             c.put();
             break;
    
	
	case 2:cout<<"\n====matrix subtraction====";
        	a.get();
       	    b.get();
        	c=a.sub(b);
        	c.put();
         	 break;
	
	
	case 3:cout<<"\n ====matrix multiplication====";
	         a.get();
			 b.get();
			c=a.mul(b);
			 c.put();
			 break;
   
   
   case 4:cout<<"\n ==== matrix transpose====";
            a.get();
			c=a.transpose();
			c.put();
			break;
			


   case 5:cout<<"\n press any key to exit\n";
           ch='n';
		   break;
		   
	default:cout<<"\n enter a valid option\n";
	}
	cout<<"do you want to continue ? :";
	cin>>ch;
	} while (ch=='y');
	
	return 0;
	}	   
  

