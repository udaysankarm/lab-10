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
      void Create (char*, int, int, int); // create function
      void Destroy (); // destroy function 
      void changeWeight (int pounds)
      {
      	int d;
				cout<<"\enter the new Weight:";
				cin>>d;
				weight=d;
      }
      void changeWeightDate (int today)
      {
        int d;
				cout<<"\enter the new Weightdate:";
				cin>>d;
				weightDate=d;
      }
      char* reptName ();
      int reptWeight ();
      inline int reptWeightDate ()
      {
	     return weightDate;
      }
      int daysSinceLastWeighed (int today);    
   };

void ZooAnimal::Create(char A[20],int x,int y,int z)
{
	name=A; 
	cageNumber=x;
	weightDate=y;
	weight=z;	
}
void ZooAnimal::Destroy ()
{    
    delete [] name;
}

   // -------- member function to return the animal's name
char* ZooAnimal::reptName ()
{
    return name;
} 
int ZooAnimal::daysSinceLastWeighed (int today)                               // -------- since the animal was last weighed
{                                                                      
    int startday, thisday;
 												//** Edits on Nov 7, 2017
   	thisday = today/100*30 + today - today/100*100;						//thisday = today/100*30 + today - today/100*100;
  	startday = weightDate/100*30 + weightDate - weightDate/100*100; 				//startday = weightDate/100*30 + weightDate - weightDate/100*100;
   	if (thisday < startday)  //if (thisday < startday) 
	 	{				
   		thisday += 360; //thisday += 360;
   		return (thisday-startday);	//return (thisday-startday);
	 	}								

    if (today < weightDate) 
	  {
	  	today += 360;
    	return (today-weightDate);
    }
}
int main()
{
 ZooAnimal K; // a sample object
 K.Create("bozo",454,678,565);
 cout<<K.reptWeightDate()<<endl;

 return 0;
}
