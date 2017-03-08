#include<iostream>
#include<time.h>
using namespace std;

int main ()
{
	int chislo, my_chislo = 0, data = 0, time_start, time_end;
	time_start = clock()/CLOCKS_PER_SEC;
	chislo = rand()%500+1;
		while(my_chislo != chislo)
		{
			cout << "Vvedite chislo. Esli ne hotite igrat' - 0" << endl;
			cin >> my_chislo;
			if(my_chislo > chislo) cout << "Vashe chislo bolshe" << endl;
			else 
			{
				cout << "Vashe chislo menshe" << endl;
			}
			if(my_chislo == 0)
			{
				return 0;
			}
			data ++;
		}
	system("cls");
	cout << "Victory !!!" << endl;
	time_end = clock()/CLOCKS_PER_SEC;
	cout << "Static: kol popitok =  " << data << endl << "time = "<< time_end - time_start << "sec"<< endl;
	system("pause");
	return 0;
}