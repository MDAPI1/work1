#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <vector>
#include<windows.h>
#pragma hdrstop
using namespace std;



void vvod(double matr[10][10], int&i,int&j)
{
    setlocale(LC_ALL, "Russian");
    
    cout << "Vvod matr:" << endl;
    cout << "Введите количество строк в вашей матрице - " << endl;
    cin >> i;

    cout << "Введите количество столбцов в вашей матрице - " << endl;
    cin >> j;

    for (int m = 0; m < i; m++)
    {
        for (int n = 0; n < j; n++)
        {
            cout << "элемент " << m << " строки " << n << " ряда  = ";
            cin >> matr[m][n];
        }
    }    
    
}

void out (double matr[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}


void trans(double matr[10][10], int n, int m)
{
    int a;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a = matr[i][j];
            matr[i][j] = matr[j][i];
            matr[j][i] = a;
        }
    }
}



int main()
{
    setlocale(LC_ALL, "Russian");
    int i, j, h, l;
    double matr1[10][10];
    double matr2[10][10];
    vvod(matr1, i, j);
    vvod(matr2, h, l);
    cout << endl;
    cout << "Кол-во строк в матрцие 1 = " << i << endl;
    cout << "Кол-во столбцов в матрцие 1 = " << j << endl;
    cout << "Кол-во строк в матрцие 2 = " << h << endl;
    cout << "Кол-во столбцов в матрцие 2 = " << l << endl;

    out(matr1, i, j);
    out(matr2, h, l);

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    trans(matr1, i, j);
    out(matr1, i, j);
}

