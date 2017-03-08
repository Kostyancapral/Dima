#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	int *massiv_1, *massiv_2, *massiv_3;
	int n;
	cout << "Vvedite kol elementov v massive ";
	cin >> n;
	massiv_1 = new int [n];
	massiv_2 = new int [n];
	massiv_3 = new int [n];
	for(int i = 0; i < n; i++)
	{
		massiv_1[i] = rand()%21;
		massiv_2[i] = rand()%21;
		massiv_3[i] = massiv_1[i] + massiv_2[i];
	}
	cout << "massiv_1 = ";
	for(int i = 0; i < n; i++)
	{
		cout << setw(3) << massiv_1[i];
	}
	cout << endl;
	cout << "massiv_2 = ";
	for(int i = 0; i < n; i++)
	{
		cout << setw(3) << massiv_2[i];
	}
	cout << endl;
	cout << "massiv_3 = ";
	for(int i = 0; i < n; i++)
	{
		cout << setw(3) <<  massiv_3[i];
	}
	cout << endl;
	
	system("pause");
	return 0;
}