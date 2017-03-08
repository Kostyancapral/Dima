#include<iostream>
#include<iomanip>
using namespace std;
void Min(int *ch, int min)
{
	for(int i = 0; i < 5; i++)
	{
		if(min >= ch[i])
		{
			min = ch[i];
		}
	}
	cout << "min chislo = " << min << endl; 	
}
void Max(int *ch, int max)
{
	for(int i = 0; i < 5; i++)
	{
		if(max <= ch[i])
		{
			max = ch[i];
		}
	}
	cout << "max chislo = " << max << endl;
}
void Arifm(int *ch, double summa, double arifmet)
{
	for(int i = 0; i < 5; i++)
	{
		summa += ch[i];
		arifmet = summa / 5;
	}
	cout << "srednee arifmet. chislo = " << arifmet << endl;
	
}
void Chisla_b0(int *ch,int k_b0)
{
	for(int i = 0; i < 5; i++)
	{
		if(ch[i] > 0)
		{
			k_b0 ++;
		}
	}
	cout << "kol chisel bolshe 0 = " <<k_b0 << endl;
}
void Chisla_m0(int *ch, int k_m0)
{
	for(int i = 0; i < 5; i++)
	{
		if(ch[i] < 0)
		{
			k_m0 ++;
		}
	}
	cout << "kol chisel menshe 0 = " <<k_m0 << endl;
}
void Chisla_d2(int *ch, int k_del_2)
{
	for(int i = 0; i < 5; i++)
	{
		if(ch[i]%2 == 0)
		{
			k_del_2 ++;
		}
	}
	cout << "kol chisel chetnih = " <<k_del_2 << endl;	
}
void Chisla_not_d2(int *ch, int k_not_del_2)
{
	for(int i = 0; i < 5; i++)
	{
		if(ch[i]%2 == 1)
		{
			k_not_del_2 ++;
		}
	}
	cout << "kol chisel NE chetnih = " <<k_not_del_2 << endl;	
}
void Chisla_d10(int *ch, int k_del_10)
{
	for(int i = 0; i < 5; i++)
	{
		if(ch[i]%10 == 0)
		{
			k_del_10 ++;
		}
	}
	cout << "kol chisel chetnih 10 = " <<k_del_10 << endl;
	
}
int main()
{
	int chislo[5], min, max, vibor, kol_b0 = 0, kol_m0 = 0, kol_del_2 = 0, kol_not_del_2 = 0, kol_del_10 = 0;
	double sum = 0, arifm;
	cout << "Vvedite 5 chisel " << endl;
	for(int i = 0; i < 5; i++)
	{
		cin >> chislo[i];
	}
	for(int i = 0; i < 5; i++)
	{
		cout << setw(5) << chislo[i];
	}
	cout << endl;
	cout <<"1 - Min chislo" <<endl;
	cout <<"2 - Max chislo" <<endl;
	cout <<"3 - Arifm chislo" <<endl;
	cout <<"4 - Kol chisel bolshe 0" <<endl;
	cout <<"5 - Kol chisel menshe 0" <<endl;
	cout <<"6 - kol chisel kratnoe 2" <<endl;
	cout <<"7 - kol chisel NE kratnoe 2" <<endl;
	cout <<"8 - kol chisel kratnoe 10" <<endl;
	cin >> vibor;
	max = chislo[0];
	min = chislo[0];

	switch (vibor)
	{
		case 1:
			Min(chislo, min);
		break;
		case 2:
			Max(chislo, max);
		break;
		case 3:
			Arifm(chislo, sum, arifm);
		break;
		case 4:
			Chisla_b0(chislo, kol_b0);
		break;
		case 5:
			Chisla_m0(chislo, kol_m0);
		break;
		case 6:
			Chisla_d2(chislo, kol_del_2);
		break;
		case 7:
			Chisla_not_d2(chislo, kol_not_del_2);
		break;
		case 8:
			Chisla_d10(chislo, kol_del_10);
		break;
	}
	system("pause");
	return 0;
}