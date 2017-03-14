#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void out(int **mass, int m, int n);
void rand(int **mass, int m, int n);
void dellmass(int **mass, int m);
int maxvalue(int **mass,int m, int n, int &max,int &maxi,int &maxj);
void outmassc(int **mass,int **massc,int m, int n, int &max,int &maxi,int &maxj);

int main() {
    setlocale(LC_ALL, "rus");
    srand(time(0));
    int n, m, max = 0, maxi = 0, maxj = 0;
    cin >> m >> n;
    int **mass=new int*[m];
    for(int i=0;i<m;i++){
        mass[i]=new int[n];}
    int **massc=new int*[m];
    for(int i=0;i<m-1;i++){
        massc[i]=new int[n-1];}
    rand (mass,m,n);
    out (mass, m,n);
    maxvalue (mass,m,n,max,maxi,maxj);
    outmassc (mass,massc,m,n,max,maxi,maxj);
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
void outmassc(int **mass,int **massc,int m, int n, int &max,int &maxi,int &maxj) { //вывод массива
    int _i=0, _j=0;
    for(int i=0; i<n; i++)
    {
        if (i!=maxi)
        {
            for(int j=0; j<m; j++)
            {
                if (j!=maxj) cout << (massc[_i][_j++]=mass[i][j]) << " ";
            }
            _j = 0;
            _i++;
            cout << endl<<endl;5
        }
    }
