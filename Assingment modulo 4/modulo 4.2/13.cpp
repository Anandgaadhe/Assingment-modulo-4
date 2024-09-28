/*Write a program to swap the two numbers using friend function without using third variable  */
#include<iostream>
using namespace std;
class Swapping
{
	private :
		int a;
		int b;
	public :
		void setvalue(int num1,int num2)
		{
			a = num1;
			b = num2;
		}
		friend void swapvalues(Swapping &obj);
		void display()
		{
			cout<<"\nValue of after a = "<<a;
			cout<<"\nValue of after b = "<<b;
		}
};
void swapvalues(Swapping &obj)
{
	obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
}
int main()
{
	Swapping s1;
	
	s1.setvalue(200,500);
	swapvalues(s1);
	s1.display();
	return 0;
}
