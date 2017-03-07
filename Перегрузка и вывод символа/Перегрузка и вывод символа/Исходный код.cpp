#include <iostream>
using namespace std;

void Vivod(char simvol)
{
	for(int i=0;i<50;i++)
	{
		cout<<simvol;
	}
	cout<<endl;
}
void Vivod()
{
	const char s='-';
	for(int i=0;i<50;i++)
	{
		cout<<s;
	}
	cout<<endl;
}
void Vivod(char simvol, int val)
{
	for(int i=0;i<val;i++)
	{
		cout<<simvol;
	}
	cout<<endl;
}

int main()
{
	char simvol;
	int val;
	cout<<"Vvedite simvol: "<<endl;
	cin>>simvol;

	bool flag=false;
	while(flag==false)
	{
		flag=true;
		cout<<"Vvedite kol raz na vivod = ";
		cin>>val;
		if(cin.fail())
		{
			cout<<"eror"<<endl;
			cin.clear();
			cin.sync();
			flag=false;
			system("pause");
			continue;
		}
	}
	Vivod();
	Vivod(simvol);
	Vivod(simvol,val);
	system("pause");
	return 0;
}