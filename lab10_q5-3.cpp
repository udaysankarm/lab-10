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
     char* reptName (); // Returns the reptile name
     int daysSinceLastWeighed (int today);
		 void Create(char A[20],int x,int y,int z);//function for receving and assiging the values of the object
		
};
void ZooAnimal::Create(char A[20],int x,int y,int z)//function to assign the values to name,cageNumber,weightDate and weight 
{
		 name=A;
		 cageNumber=x;
     weightDate=y;
     weight=z;
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
// -------- member function to return the animal's name
char* ZooAnimal::reptName ()
   {
    return name;
   }  
   
 // ========== an application to use the ZooAnimal class    
int main ()
   {
    ZooAnimal bozo;//declaring a zooAnimal object
		char B[]="Bozo";//storing the name of the animal in B
    bozo.Create (B, 408, 1027, 400); //calling the create function
    cout <<"This animal's name is:"<<bozo.reptName()<<endl;// printing the name of the function
	  return 0;
}
