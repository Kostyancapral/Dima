#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	const int n=5;
	int ICQ[n], Telephone[n];
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		flag=false;
		while(flag==false)
		{
			flag=true;
			cout<<"Vvedite ICQ: ";
			cin>>ICQ[i];
			if(cin.fail())//проверка
			{
				cout<<"eror"<<endl;
				cin.clear();
				cin.sync();
				flag=false;
				system("pause");
				continue;
			}
		}
		flag=false;
		while(flag==false)
		{
			flag=true;
			cout<<"Vvedite telephone number: ";
			cin>>Telephone[i];
			if(cin.fail())//проверка
			{
				cout<<"eror"<<endl;
				cin.clear();
				cin.sync();
				flag=false;
				system("pause");
				continue;
			}
		}
	}

	string menu="-1";

	while(menu!="0")
	{
		cout<<"1 - sort po ICQ"<<endl;
		cout<<"2 - sort po telephone"<<endl;
		cout<<"3 - vivod"<<endl;
		cout<<"0 - exit"<<endl;
		cin>>menu;
		if(menu=="1")
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(ICQ[j]<ICQ[j+1])
					{
						swap(ICQ[j],ICQ[j+1]);
						swap(Telephone[j],Telephone[j+1]);
					}
				}
			}
		}
		if(menu=="2")
		{
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(Telephone[j]<Telephone[j+1])
					{
						swap(ICQ[j],ICQ[j+1]);
						swap(Telephone[j],Telephone[j+1]);
					}
				}
			}
		}
		if(menu=="3")
		{
			cout<<setw(15)<<"ICQ"<<setw(15)<<"Telephone"<<setw(15)<<"--ask"<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<setw(15)<<ICQ[i]<<setw(15)<<Telephone[i]<<setw(15)<<"--ask"<<endl;
			}
		}
	}
	
	system("pause");
	return 0;
}