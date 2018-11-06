#include<iostream>
using namespace std;
   
 class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create (char*A, int x, int y , int z); // create function
      /*void Destroy (); // destroy function 
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight ();*/
      int reptWeightDate ();
      /*int daysSinceLastWeighed (int today);*/
   };
int ZooAnimal::reptWeightDate ()
{
	return weightDate;
} 
void ZooAnimal::Create(char *A,int x,int y,int z) //function assign value to the private variables
{
	name=A;
	cageNumber=x;
	weightDate=y;
	weight=z;	
}
int main()
{ 
 	ZooAnimal K;
  char D[]="etgfdgher";
	K.Create(D,1,2,3);
	cout<<K.reptWeightDate();
	return 0;
}
