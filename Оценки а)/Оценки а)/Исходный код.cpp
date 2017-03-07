#include <iostream>
using namespace std;

int main()
{
	const int n=10;
	int mass[n];
	int kol_5=0, kol_4=0, kol_3=0, kol_2=0;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		flag=false;
		while(flag==false)
		{
			flag=true;
			cout<<i+1<<"-ya ocenka= ";
			cin>>mass[i];
			if(cin.fail()||mass[i]>12||mass[i]<1)//проверка
			{
				cout<<"eror"<<endl;
				cin.clear();
				cin.sync();
				flag=false;
				system("pause");
				continue;
			}
		}
		if(mass[i]<4) kol_2++;
		if(mass[i] >= 4 && mass[i] <= 6) kol_3++;
		if(mass[i] >= 7 && mass[i] <= 9) kol_4++;
		if(mass[i] >= 10 && mass[i] <= 12) kol_5++;
	}
	cout<<"U vas "<<kol_2<<" dvoek"<<endl;
	cout<<"U vas "<<kol_3<<" troek"<<endl;
	cout<<"U vas "<<kol_4<<" chetverok"<<endl;
	cout<<"U vas "<<kol_5<<" pyaterok"<<endl;
	system("pause");
	return 0;
}