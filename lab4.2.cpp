#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void out(int **mass, int m, int n);
void rand(int **mass, int m, int n);
void dellmass(int **mass, int m);
int maxvalue(int **mass,int m, int n, int &max,int &maxi,int &maxj);
int massC(int **mass,int **massc,int m, int n, int &max,int &maxi,int &maxj);

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n, m, max = 0, maxi = 0, maxj = 0;
    cin >> m >> n;
    int **mass=new int*[m];
    for(int i=0;i<m;i++){
        mass[i]=new int[n];}
    int **massc=new int*[m];
    for(int i=0;i<m;i++){
        massc[i]=new int[n];}
    rand (mass,m,n);
    out (mass, m,n);
    maxvalue (mass,m,n,max,maxi,maxj);
    dellmass(mass,m);
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

void dellmass(int **mass, int m) { //удаление массива
    for(int i=0;i<m;i++)
        delete[] mass[i];
    delete[] mass;
}

int maxvalue(int **mass,int m, int n, int &max,int &maxi,int &maxj){ // нахождение максимального значения
    for(int i=0;i<m;i++){
        for(int j=0; j<n;j++){
            if(mass[i][j]>max){
                max = mass[i][j];maxj = j;maxi = i;
            }
        }
    }
    cout << "Максимальное значение: "<< max <<" Столбец: "<< maxj+1<< " Строка: "<< maxi+1 <<endl;
}
int massC(int **mass,int **massc,int m, int n, int &max,int &maxi,int &maxj) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == maxj) {
                massc[i][j] = mass[i][j+1];
            }
            if ()
        }
    }
}
