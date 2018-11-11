# include<iostream>
using namespace std;
class ZooAnimal  
{
	 private:
		 char *name;
     int cageNumber;
     int weightDate;
     int weight;
   public:
     // prototype of create function goes here

     void Destroy (); // destroy function 
     char* reptName (); // Returns the reptile name
     int daysSinceLastWeighed (int today);
		 void Create(char A[20],int x,int y,int z);
   };
void ZooAnimal::Create(char A[20],int x,int y,int z)
{
		 name=A;
		 cageNumber=x;
     weightDate=y;
     weight=z;
}
void ZooAnimal::Destroy()
{
		 delete [] name;
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
char* ZooAnimal::reptName ()
   {
    return name;
   }  
   // -------- member function to return the animal's name
  
   
   // ========== an application to use the ZooAnimal class
   int main ()
   {
    ZooAnimal bozo;
		char B[]="Bozo";
    bozo.Create (B, 408, 1027, 400);
    cout <<"This animal's name is:"<<bozo.reptName()<<endl;
		
    bozo.Destroy ();
	  return 0;
   }
