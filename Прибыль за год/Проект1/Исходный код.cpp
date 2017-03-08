#include<iostream>
using namespace std;

int main ()
{
	double money[12], max_s, min_s;
	int max_m, min_m;
	cout << "Vvedite sum"<< endl;
	for(int i = 0; i < 12; i ++)
	{
		cout << "Sum za " << i+1 << " " ;
		cin >> money[i];
	}
	cout << endl;
	max_s = money[0];
	min_s = money[0];
	max_m = 0;
	min_m = 0;
	for(int i = 0; i < 12; i++)
	{
		if(max_s <= money[i])
		{
			max_s = money[i];
			max_m = i;
		}
		if(min_s >= money[i])
		{
			min_s = money[i];
			min_m = i;
		}
	}
	cout << "Max sum = "<< max_s << " za ";
	switch (max_m)
	{
		case 0:
			cout << "January";
		break;
		case 1:
			cout << "February";
		break;
		case 2:
			cout << "March";
		break;
		case 3:
			cout << "April";
		break;
		case 4:
			cout << "May";
		break;
		case 5:
			cout << "June";
		break;
		case 6:
			cout << "July";
		break;
		case 7:
			cout << "August";
		break;
		case 8:
			cout << "September";
		break;
		case 9:
			cout << "October";
		break;
		case 10:
			cout << "November";
		break;
		case 11:
			cout << "December";
		break;
	}
	cout <<endl;
	cout << "Min sum = "<< min_s << " za ";
	switch (min_m)
	{
		case 0:
			cout << "January";
		break;
		case 1:
			cout << "February";
		break;
		case 2:
			cout << "March";
		break;
		case 3:
			cout << "April";
		break;
		case 4:
			cout << "May";
		break;
		case 5:
			cout << "June";
		break;
		case 6:
			cout << "July";
		break;
		case 7:
			cout << "August";
		break;
		case 8:
			cout << "September";
		break;
		case 9:
			cout << "October";
		break;
		case 10:
			cout << "November";
		break;
		case 11:
			cout << "December";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}