#include<iostream>
using namespace std;
// a class with 2 functions and 2 variables to store length and breadth
class rectangle
{ 
	float l,b,A,peri; 	
	public: 
        rectangle(int x, int y)
	{
         l=x;
	 b=y;
	}
	
	void Per()//function for perimeter
	{
		peri=(l+b)*2;
	}                   					
	void area()//function to find area
	{
	 A=l*b;		
	}
	~rectangle()
	{
	area();Per();
	cout<<"\nThe area of the rectangle is :"<<A<<"\nThe perimeter of the rectangle is:"<<peri;
	}
};

int main()
{
	float a,b;
	cout<<"Enter the length and breadth of the rectangle:";
	cin>>a>>b;
	rectangle *q=new rectangle(a,b);
	delete q;
	return 0;
}
