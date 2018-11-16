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
      void isMotherOf (ZooAnimal &P);//function used to assign the mother variable
      void changeWeight (int pounds);
      void changeWeightDate (int today);
      char* reptName ();
      int reptWeight ();
      void reptWeight (int scale_which);
      inline int reptWeightDate () {return weightDate;};
      int daysSinceLastWeighed (int today);
			void motherMod(ZooAnimal *T);
			int cageNo(); //function to acess the cage number
			ZooAnimal* motherAcess(); //used to acess the mother pointer
};
ZooAnimal* ZooAnimal::motherAcess()//used to return the address stored in mother variable 
{
	return mother; //returning the variable
}
int ZooAnimal::cageNo() //fuction to return the cage number
{
	return cageNumber;
 
}
int ZooAnimal::reptWeight() //function to return the weight of the reptail
{ 
 			cout<<endl;
 			return weight; 
}
void ZooAnimal::motherMod(ZooAnimal *T) //function to assign the value of the mother variable
{
		  mother=T; //assinging the value of the address to the mother variable
}
void ZooAnimal::Create(char A[20],int x,int y,int z) //function to the get the values for each variable
{
		 name=A;//assinging the value of name
		 cageNumber=x;//assinging the cage number
     weightDate=y;//assigning the weight date
     weight=z;//assigning the weight
}
void ZooAnimal::isMotherOf(ZooAnimal &P)//mother of function to acess the object whose mother calls this function
{
  P.motherMod(this); //calling the motherMod function of the son/daughter to assign the value of mother
}
int main()
{
 		ZooAnimal K,L;//declaring two objects
 		K.Create("andy",23,45,78);//assinging values to each variable in the objects
		L.Create("Bozo",45,78,98);
 		L.isMotherOf(K);//calling the ismotherof function
 		cout<<K.motherAcess()->reptWeight()<<endl;// printing the weight of the mother through the mother variable in the son/daughter object
		cout<<K.motherAcess()->cageNo()<<endl;// printing the cage number of the mother through the mother variable in the son/daughter object
		return 0;
}
