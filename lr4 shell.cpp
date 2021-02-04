// lr4 shell.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}


void shell_sort(int arr[], const int n) {
   
    for (int i = 0; i < n/2; i++ ) {
        if (arr[i] > arr[i + (n/2)]) {
            swap(arr[i], arr[i + (n/2)]);
        }        
    }   
    for (int i = 0; i < (n -(n/4)); i ++) {
        if (arr[i] > arr[i+(n/4)]) {
            swap(arr[i], arr[i + (n/4)]);
        }
      }       
    for (int i = 0; i < n-(n/8); i++) {
        if (arr[i] > arr[i + (n / 8)]) {
            swap(arr[i], arr[i + (n / 8)]);
        }
    }       
    for (int i = 0; i < (n - (n/16)); i++) {
        if (arr[i] > arr[i + (n / 16)]) {
            swap(arr[i], arr[i + (n / 16)]);
        }
    }
    for (int i = n-1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (arr[i] < arr[i - 1]) {
            swap(arr[i], arr[i - 1]);
        }
    }
}

int main()
{
    const int n = 30;
    int r[n];
    srand(time(nullptr));
    for (int i = 0; i < 30; i++) {
        r[i] = rand() % 201 - 100;
        cout << r[i] << " ";
    }
    cout << endl;
    shell_sort(r, 30);
    for (int i = 0; i < 30; i++) {
        cout << r[i] << " ";
    }
    return 0;
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
