#include <iostream>

using namespace std;

void power(double &res, double value, int stepen)
{
	if(stepen!=0)
	{
		res*=value;
		power(res,value, stepen-1);
	}
}

int main()
{
	double value, result;
	int stepen;
	result=1;
	cout<<"Vvedite chislo: ";
	cin>>value;
	cout<<"Vvedite stepen chisla: ";
	cin>>stepen;
	power(result, value, stepen);
	cout<<"Resultat = ";
	cout<<result<<endl;
	system("pause");
	return 0;
}