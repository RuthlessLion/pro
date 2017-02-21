#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void malloc (int n)
{	
	srand(time(0));
	float *b = NULL,*c = NULL,*d = NULL;
	int m=0,k=0,r=0,t=0;
	c=(float *) malloc(m*sizeof(float));
	d=(float *) malloc(k*sizeof(float));
	b=(float *) malloc(n*sizeof(float));

	if ( b == NULL ) // если не удалось выделить память 
 {  
     cout << " Не удалось выделить память ";
    return ; // выход по ошибке, код ошибки 1
 }

	for (int i=0;i<n;i++)// заполнение массива рандомными значениями от -50 до 50
	{
		b[i] = rand()%100-50;
	}

	for (int i=0;i<n;i++)// проверка массива на положительные числа и отрицательные
	{
		if (b[i]<0)
		{
			k++;
		}
		if (b[i]>=0)
		{
			m++;
		}

	}
	for(int i=0;i<n;i++){
		if (b[i]<0)
		{
			d[t] = b[i];
			t++;
		}
		if (b[i]>=0)
		{	
			c[r] = b[i];
			r++;
		}
	}
		//d[k] = b[i]; 			//c[m] = b[i];

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
	free(b);
	free(d);
	free(c);

}

int main()
{	
	int n;
	cout << "Введите размер массива:";
	cin >> n;
	malloc(n);

}
