#include<iostream>
using namespace std;
// a class with 2 functions and 2 variables to store length and breadth
class rectangle
{ 
	public: 
	float l,b,A,peri; 
  void getval()//we need a function to recevive the value that user inputs
	{
		cout<<"\nEnter the length and breadth";
		cin>>l>>b;
	} 

  void Per()//function for perimeter
	{
		peri=(l+b)*2;
	}                   					
	void area()//function to find area
	{
	 A=l*b;		
	}
};



int main()
{
	rectangle q[2];
  cout<<"Enter the details for first rectangle:\n";
	q[0].getval();
	q[0].Per();		
  q[0].area();
	cout<<"Enter the details for second rectangle";
	q[1].getval();
	q[1].Per();		
  q[1].area();
  if(q[0].A>q[1].A)
	cout<<"\nThe area of the first is greater";
  else if(q[0].A<q[1].A)
	cout<<"\nThe area of the second is greater";
  else
	cout<<"\nThe area of both the rectangles are same"; 

  if(q[0].peri>q[1].peri)
	cout<<"\nThe perimeter of the first is greater";
  else if(q[0].peri<q[1].peri)
	cout<<"\nThe perimeter of the second is greater";
  else
	cout<<"\nThe perimeter of both the rectangles are same"; 
	cout<<endl;
	return 0;
}
