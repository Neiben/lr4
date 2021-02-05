﻿// lr4 quick.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}
void quick_sort(vector <int>& vec, int low, int high) {
    int i = low;
    int j =high;
    int tmp;
    int pivot = vec[(i + j) / 2];
    while (i <= j) {
        while (vec[i] < pivot) {
            i++;
        }
        
        while (vec[j] > pivot) {
            j--;
        }        
        if (i <= j) {
            swap(vec[i], vec[j]);                   
            i++;
            j--;
        }
    }
    if (j > low) {
        quick_sort(vec, low, j);
    }        
    if (i < high) {
        quick_sort(vec, i, high);
    }   
}

int main()
{
    const int n = 30;
   vector <int> r (n);
    srand(time(nullptr));
    for (int i = 0; i < 30; i++) {
        r[i] = rand() % 201 - 100;
        cout << r[i] << " ";
    }
    cout << endl;
    quick_sort(r,0,29);
    for (int i = 0; i < 30; i++) {
        cout << r[i] << " ";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.