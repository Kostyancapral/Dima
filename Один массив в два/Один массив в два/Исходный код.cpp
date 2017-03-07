#include <iostream>
#include <string>
using namespace std;



int main()
{
	const int n=10;
	int mass[n]={1,2,3,4,5,6,7,8,9,0};//это значения массива
	int subm1[n/2],subm2[n/2];
	string menu;
	cout << "1 - 5 v 1 i 5 v 2"<<endl;
	cout << "2 - po odnomy v kagdiy"<<endl;
	cin>>menu;
	if(menu=="1")//вариант когда заполнение "последовательное"
	{
		for(int i=0;i<10;i++)
		{
			if(i<n/2)	subm1[i]=mass[i];
			else	subm2[i-n/2]=mass[i];
		}
	}
	if(menu=="2")//вариант когда заполнение "перекрестное"
	{
		int counter=0;
		for(int i=0;i<10;i++)
		{
			if(i%2==0)
			{
				subm1[counter]=mass[i];
			}
			else
			{
				subm2[counter]=mass[i];
				counter++;
			}
		}
	}
	cout<<"massiv: ";
	for(int i=0;i<n;i++)	cout<<mass[i]<<" ";
	cout<<endl;
	cout<<"submass1: ";
	for(int i=0;i<n/2;i++)	cout<<subm1[i]<<" ";
	cout<<endl;
	cout<<"submass2: ";
	for(int i=0;i<n/2;i++)	cout<<subm2[i]<<" ";
	cout<<endl;
	system("pause");
	return 0;
}

//Не понял про последовательность поэтому есть две вариации
//1 сначала 5 елементов в один потом в другой
//по очереди по одному елементу в разные массивы.