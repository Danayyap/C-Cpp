#include<iostream>
using namespace std;
class calculator
{
	public:
		int add(int a, int b);
		double add(double a, double b);
		char add(char a, char b);

};
int calculator :: add (int a, int b)
{
	return a+b;
}
double calculator :: add (double a, double b)
{
	return a+b;
}
char calculator :: add (char a, char b)
{
	return a+b;
}
int main()
{
	int a,b;
	calculator cal;
	cout<<"enter any 2 values"<<endl;
	cin>>a,b;
	cout<<cal.add(1,2)<<endl;
	cout<<cal.add(5.0,2.0)<<endl;
	cout<<cal.add('c','b')<<endl;
	
	return 1;
}
