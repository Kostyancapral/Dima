#include <iostream>
using namespace std;
 
int BinSearch(int *massiv, int n, int key)
{

    int L = 0;
    int R = n;
 
    int m;
    int z = 0;
 
    while (L<R)
    {
        z++;
        m = (L+R)/2;
        if (key > massiv[m]) L = m;
        if (key < massiv[m]) R = m;
        if (key == massiv[m]) break;
    }
 
    return m;
}
 
int main()
{
    const int n=20;
    int mass[20];
    int key=8;
    for (int i=0; i<n; i++)
    {
        cout << "Vvedite mass[" << i+1 << "] = ";
        cin >> mass[i];
    }
    int pozition=-1;
	pozition = BinSearch(mass, n, key);
    int sum=0, pr=1;
	for(int i=0;i<pozition;i++)
	{
		pr*=mass[i];
	}
	for(int i=pozition+1;i<n;i++)
	{
		sum+=mass[i];
	}
	if(pozition==-1)
	{
		cout<<"8 v massive net. Ne nado tak";
	}
	else
	{
		cout<<"8 pod nomerom "<<pozition+1<<endl;
		cout<<"Summa elementov posle = "<< sum<<endl;
		cout<<"Proizvidenie elementov do = "<< pr<<endl;
	}
	system("pause");
    return 0;
}
 
//задача предполаает перед собой использование бинарного поиска следовательно массив должен быть упорядочен
//вариант, где массив сначала сортируется, ищется 5 и потом отсортировуется обратно сразу отметается так как тогда поиск не имеет смысла
//так как элементы при сортировке будут менять порядок
//первым будет элемент не тот который первый по счету, а тот, который будет первый по поиску