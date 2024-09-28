/* Write a program to Mathematic operation like Addition, Subtraction,Multiplication, 
Division Of two number using different parameters and Function Overloading */
#include<iostream>
using namespace std;
class math
{
	public :
			void sum(int a,int b)
			{
				int ans;
				ans=a+b;
				cout<<"\nAddition of "<<a<<" and "<<b<<" is = "<<ans;		
			}
			void sum(double a,double b)
			{
				int ans;
				ans=a-b;
				cout<<"\nSubtraction of "<<a<<" and "<<b<<" is = "<<ans;
			}
			void sum(int a,double b)
			{
				int ans;
				ans=a*b;
				cout<<"\nMultiplication  of "<<a<<" and "<<b<<" is = "<<ans;
			}
			void sum(float a,float b)
			{
				int ans;
				ans=a/b;
				cout<<"\nDivision of "<<a<<" and "<<b<<" is = "<<ans;
			}
};
int main()
{
	
	math m1;
	m1.sum(5,6);
	
	math m2;
	m2.sum(42.42,22.22);
	
	math m3;
	m3.sum(9,90.76);
	
	math m4;
	m4.sum(22.26,95.27);
	return 0;
}

