/* Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)  */
#include<iostream>
using namespace std;
class Cricketer
{
	protected:
       string name;
       int matches;
	public :
      
	void set1(string n,int m)
	{
		name=n;
		matches=m;
	}
	void get1()
	{
		cout<<"\nName = "<<name;
		cout<<"\nMatch = "<<matches;
	}  
	     
};
class Batsman : public Cricketer
{
	private :
		int totalrun;
	    float average;
		string performance;
	public:
	void set2()
	{
		cout<<"\nEnter totalrun = ";
		cin>>totalrun;
		cout<<"\nPerformance = ";
		cin>>performance;
	}
	void calculateavaragerun()
	{
		Cricketer::get1();
		average =(float)totalrun/(float)matches;
	}
	void get2()
	{
		cout<<"\ntotalrun is = "<<totalrun;
		cout<<"\navarage is = "<<average;
		cout<<"\nperformance is = "<<performance;
	}			
};
int main()
{
    Batsman b1;
    b1.set1("Hardik Pandya ",5);
    b1.set2();
    b1.calculateavaragerun();
    b1.get2();
    
    return 0;
}
