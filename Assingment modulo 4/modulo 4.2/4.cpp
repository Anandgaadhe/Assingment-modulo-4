/*Write a program of Addition, Subtraction, Division, Multiplication using constructor.*/
#include<iostream>
using namespace std;
class sum
{
	public :
		sum(int x, int y)
		{
			int result1,result2,result3,result4;
			result1 = x + y;
			result2 = x - y;
			result3 = x * y;
			result4 = x / y;
			cout<<"\nAddition of "<< x << " And " << y<< " is  = " <<result1;
			cout<<"\nSubtract of "<< x << " And " << y<< " is  = " <<result2;
			cout<<"\nMultiplication of "<< x << " And " << y<< " is  = " <<result3;
			cout<<"\ndivide of "<< x << " And " << y<< " is  = " <<result4;
			
		}
};
int main()
{
	sum s1(50,20);
	return 0;
}
