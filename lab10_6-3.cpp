#include<iostream>
using namespace std;

class ZooAnimal  
{
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
      ZooAnimal *mother;
    public:
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void isMotherOf (ZooAnimal&);
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (int scale_which);
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
			void motherMod(ZooAnimal);
};
void ZooAnimal::motherMod(ZooAnimal T)
{
		 mother=&T;
}
void ZooAnimal::Create(char A[20],int x,int y,int z)
{
		 name=A;
		 cageNumber=x;
     weightDate=y;
     weight=z;
}
void ZooAnimal::isMotherOf(ZooAnimal P)
{
  P.motherMod(ZooAnimal);
}
int main()
{
 ZooAnimal K,L;
 K.Create("andy",23,45,78)
 L.Create("Bozo",45,78,98)
 L.isMotherOf(K);
return 0;
}
