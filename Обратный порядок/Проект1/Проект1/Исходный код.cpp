#include <iostream>
using namespace std;

void Recr()
{
	double a;
	cout<<"Vvedite chislo: ";
	cin>>a;
	if(cin.fail())
	{
		
	}
	else
	{
		Recr();
		cout<<a<<" ";
	}
}

int main()
{
	Recr();
	system("pause");
	return 0;
}