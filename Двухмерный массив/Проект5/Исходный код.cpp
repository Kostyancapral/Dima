#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int **mas, min, max, kol = 0;
	double n, m, sum = 0, arifm = 0;
	cout << "Vvedite kol strok massiva = ";
	cin >> n;
	cout << "Vvedite kol kolonok  massiva = ";
	cin >> m;
	mas = new int *[n];
	for(int i = 0; i < n; i++)
	{
		mas[i] = new int [m];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			mas[i][j] = rand()%30 + 1;
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << setw(5) << mas[i][j];
		}
		cout << endl;
	}
	cout << endl;
	min = mas[0][0];
	max = mas[0][0];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			sum += mas[i][j];
			arifm = (sum / (n * m));
			if(max <= mas[i][j])
			{
				max = mas[i][j];
			}
			if(min >= mas[i][j])
			{
				min = mas[i][j];
			}
			if(mas[i][j] > 5)
			{
				kol ++;
			}
		}
		cout << endl;
	}
	cout << endl;
	cout << "summa elementov = " << sum << endl;
	cout << "srednee arifm elemetnov massiva = " << arifm << endl;
	cout << "max chislo = " << max << endl;
	cout << "min chislo = " << min << endl;
	cout << "kol chisel > 5 = " << kol<< endl;

	system("pause");
	return 0;
}