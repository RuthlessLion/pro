#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void malloc (int n)
{	
	srand(time(0));
	int *b,*c,*d,m=0,k=0;
	c=(int *) malloc(m*sizeof(int));
	d=(int *) malloc(k*sizeof(int));
	b=(int *) malloc(n*sizeof(int));

	if ( b == NULL ) // если не удалось выделить память 
 {  
     cout << " Не удалось выделить память ";
    return ; // выход по ошибке, код ошибки 1
 }

	for (int i=0;i<n;i++)// заполнение массива рандомными значениями от -50 до 50
	{
		b[i] = rand()%100-50;
	}

	for (int i=0;i<n;i++)
	{
		if (b[i]<0)
		{
			d[k] = b[i];
			k++;
		}
		if (b[i]>=0)
		{
			c[m] = b[i];
			m++;
		}
	}
	cout << endl<< "вывод исходного массива: ";
	for (int i=0;i<n;i++)// вывод исходного массива
	{
		cout << b[i] << " ";
	}
	cout <<endl<< "вывод отрицательного массива: ";
	for (int i=0;i<k;i++)// вывод отрицательного массива чисел
	{
		cout << d[i] << " ";
	}
	cout <<endl<< "вывод положительного массива: ";
	for (int i=0;i<m;i++)// вывод положительного массива чисел
	{
		cout << c[i]<< " ";
	}

}

int main()
{	
	int n;
	cout << "Введите размер массива:";
	cin >> n;
	malloc(n);

}
