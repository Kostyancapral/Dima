#include <iostream>
using namespace std;
void DrawTriugol(int visota)
{
	const int start=40;
	int counter = 0;
	while(counter!=visota)
		{
		for(int i=0;i<start-counter;i++)
		{
			cout<<" ";
		}
		for(int i=0;i<2*counter+1;i++)
		{
			cout<<"*";
		}
		cout<<endl;
		counter++;
	}
}
int main()
{
	DrawTriugol(3);
	DrawTriugol(5);
	DrawTriugol(7);
	DrawTriugol(9);
	system("pause");
	return 0;
}