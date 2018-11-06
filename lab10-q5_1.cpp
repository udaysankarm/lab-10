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
    void Destroy (); // destroy function
    char* reptName ();
    int daysSinceLastWeighed (int today);
		void Create(char A[20],int x,int y,int z); //prototype for the function Create
};
void ZooAnimal::Create(char A[20],int x,int y,int z)
{
cout<<A<<endl<<x<<endl<<y<<endl<<z<<endl;
}

int main()
{ 
	ZooAnimal K;
	K.Create("fesdg",1,2,3);
	return 0;
}
