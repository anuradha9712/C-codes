//BINARU SEARCH 
#include<iostream.h>
int main()
{
	int a[10],digit,pos,i,found=0,n,beg,last,mid,end;
	cout<<"ENTER THE NUMBER OF ELEMENTS IN ARRAY: ";
	cin>>n;
	cout<<"\nENTER THE ELEMENTS OF ARRAY: ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nENTER THE DIGIT TO BE SEARCHED: ";
	cin>>digit;
	beg=0;
	last=n-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(a[mid]==digit)
		{
			cout<<"ELEMENT FOUND AT POSITION: "<<mid+1;
			break;
		}
		if(digit<a[mid])
			last=mid-1;
		if(digit>a[mid])
			beg=mid+1;
	}
	if(beg>last)
		cout<<"\nELEMENT NOT FOUND";
	return 1;
}



//***********OUTPUT**************************
/*
ENTER THE NUMBER OF ELEMENTS IN ARRAY: 5

ENTER THE ELEMENTS OF ARRAY: 6
9
8
2
1

6 9 8 2 1
ENTER THE DIGIT TO BE SEARCHED: 8
ELEMENT FOUND AT POSITION: 3
Press Enter to return to Quincy...
*/

