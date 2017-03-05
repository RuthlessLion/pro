#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void out(int **mass, int m, int n);
void rand(int **mass, int m, int n);
void dellmass(int **mass, int m, int n);
int maxvalue(int **mass,int m, int n);

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n, m;
    cin >> m >> n;
    int **mass=new int*[m];
    for(int i=0;i<m;i++)
        mass[i]=new int[n];
    rand(mass,m,n);
    out(mass, m,n);
    maxvalue(mass,m,n);

    dellmass(mass,m,n);

    system("pause");
    return 0;
}

void rand(int **mass, int m, int n) { // заполнение массива рандомными значениями от 100 до 1000
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            mass[i][j] = 100 + rand()%900;
        }
    }
}

void out(int **mass, int m, int n) { //вывод массива
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            cout<<mass[i][j]<<"  ";
        cout<<endl<<endl;
    }
}

void dellmass(int **mass, int m, int n) { //удаление массива
    for(int i=0;i<m;i++)
        delete[] mass[i];
    delete[] mass;
}

int maxvalue(int **mass,int m, int n){
    int max,maxj,maxi;
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            if(mass[i][j]>max){
                max = mass[i][j];maxj = j;maxi = i;
            }
        }
    }
    cout << "Максимальное значение: "<< max <<" Столбец: "<< maxj+1<< " Строка: "<< maxi+1;
}
void massdellmaxvalue(int **maxx,int);