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
    void changeWeight (int pounds);
    inline void changeWeightDate (int today);
    char* reptName ();
    int reptWeight ();
    void reptWeight (int scale);
    int reptWeightDate ()
    {
			return weightDate;
    }
    int daysSinceLastWeighed (int today);
};
inline void ZooAnimal::changeWeightDate(int today)
{
	weightDate=today;	
	


}
int main()
{
	ZooAnimal K;
	K.changeWeightDate(56);
	cout<<K.reptWeightDate();
	return 0;
}
