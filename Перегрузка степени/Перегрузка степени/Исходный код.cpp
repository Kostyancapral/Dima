#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int power(int val, int step)
{
	int pr=1;
	for(int i=0;i<step;i++)
	{
		pr*=val;
	}
	return pr;
}
double power(double val, int step)
{
	double pr=1;
	for(int i=0;i<step;i++)
	{
		pr*=val;
	}
	return pr;
}
string power(string val, int step)
{
	string pr=val;
	for(int i=0;i<step-1;i++)
	{
		pr+=pr;
	}
	return pr;
}

double koren(int val)
{
	double pr=1;
	pr=sqrt(val);
	return pr;
}
double koren(double val)
{
	double pr=1;
	pr=sqrt(val);
	return pr;
}
double koren(int val, int step)
{
	double pr=1;
	pr=pow(val,step);
	return pr;
}

int main()
{
	int a=7;
	double d=4.2;
	string str="h";
	int step=3;
	cout<<"power("<<a<<", "<<step<<") = "<<power(a,step)<<endl;
	cout<<"power("<<d<<", "<<step<<") = "<<power(d,step)<<endl;
	cout<<"power("<<str<<", "<<step<<") = "<<power(str,step)<<endl<<endl;
	cout<<"koren("<<a<<") = "<<koren(a)<<endl;
	cout<<"koren("<<d<<") = "<<koren(d)<<endl;
	cout<<"koren("<<a<<", "<<step<<") = "<<koren(a,step)<<endl;
	system("pause");
	return 0;
}