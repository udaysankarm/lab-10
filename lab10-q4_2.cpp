
#include <iostream>
using namespace std ;


// ********************************************************************
//  Declaration of class Point
// ********************************************************************

// class Point represents a two-dimensional point
class Point
{
public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print()
{
	cout<<": ("<<X<<","<<Y<<")\n"; //function to print the points

}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************
class rectangle
{
	private:
	public:
	Point a,b,c,d; /*here a b c d are vetices starting from left bottom in a clockwise order*/

	rectangle();//default constructor
	rectangle(Point j,Point k);//constructor with 2 arguments
	void print_a();
	void print_b();
	void print_c();
	void print_d();
};
//methods for class rectangle
rectangle::rectangle()//default constructor
{
	a.Set_X(0);
	a.Set_Y(0);
	b.Set_X(1);
	b.Set_Y(0);
	c.Set_X(0);
	c.Set_Y(1);
	d.Set_X(1);
	d.Set_Y(1);
}
rectangle::rectangle(Point j,Point k)//constructor with 2 arguments
{
	a=j; //giving the value of points to the variabls in class
	c=k;
	b.Set_X(c.Get_X());
	b.Set_Y(a.Get_Y());
	d.Set_X(a.Get_X());
	d.Set_Y(c.Get_Y());
}
void rectangle::print_a()//function to print the point a
{
	cout<<"\ncordinate of left bottom point A is";
  a.print();
}
void rectangle::print_b()//function to print the point b
{
	cout<<"\ncordinate of right bottom point B is";
  b.print();
}
void rectangle::print_c()//function to print the point c
{
	cout<<"\ncordinate of right top point C is";
	c.print();
}
void rectangle::print_d()//function to print the point d
{
 cout<<"\ncordinate of left top point D is";
 	d.print();
}
int main()
{               
	int x,y;
	cout<<"Hello this is a program to find the unknown vertices of rectangle if two diagonals are given of a rectangle with sides parallel to the x and y axis \n\n\nEnter the cordinates left bottom point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point t(x,y);
	cout<<"\nEnter the cordinates right top point of needed rectangle(x cordinate first then y cordinate):";
	cin>>x>>y;
  Point u(x,y);	
                                 /* instruction to user for inputting the values with the constrain that the first one is         leftbottom and the next is top right*/
	rectangle q(t,u);
	q.print_a();
	q.print_b();
	q.print_c();
	q.print_d();
	cout<<"\n out-put for default settings\n";
	rectangle r;
	r.print_a();
	r.print_b();
	r.print_c();
	r.print_d();
  return 0;
}

