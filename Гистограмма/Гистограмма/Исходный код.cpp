#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(0));
	const int n=15;
	int mass[15];
	for(int i=0;i<n;i++)
	{
		mass[i]=rand()%21;//от 1 до 20
	}
	cout<<"massiv: ";
	for(int i=0;i<n;i++)
	{
		cout<<mass[i]<<" ";
	}
	cout<<endl<<endl;
	cout<<"gistogramm: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<mass[i];j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl<<endl;
	system("pause");
	return 0;
}