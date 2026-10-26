// ЛР 6.3 рек

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void Print(int* a, const int size, int i);
void BubblePass(int* a, const int last, int j);
void Sort(int* a, const int size, int i);

template <typename T>
void Print(T* a, const int size, int i);
template <typename T>
void BubblePass(T* a, const int last, int j);
template <typename T>
void Sort(T* a, const int size, int i);

int main()
{
    const int n = 10;

    int a[n] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
    cout << "Sort(a, n):" << endl;
    Print(a, n, 0);
    Sort(a, n, 0);
    Print(a, n, 0);

    int a2[n] = { 5, -2, 9, 0, 7, 3, -8, 3, 6, 1 };
    cout << "Sort<int>(a, n):" << endl;
    Print<int>(a2, n, 0);
    Sort<int>(a2, n, 0);
    Print<int>(a2, n, 0);

    double b[n] = { 4.4, 1.5, 9.9, 0.0, 7.1, 3.3, 8.2, 3.3, 6.6, 1.1 };
    cout << "Sort<double>(b, n):" << endl;
    Print<double>(b, n, 0);
    Sort<double>(b, n, 0);
    Print<double>(b, n, 0);

    string c[n] = { "red", "green", "blue", "white", "black", "yellow", "orange", "pink", "brown", "gray" };
    cout << "Sort<string>(c, n):" << endl;
    Print<string>(c, n, 0);
    Sort<string>(c, n, 0);
    Print<string>(c, n, 0);

    return 0;
}

void Print(int* a, const int size, int i)
{
    cout << setw(8) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

void BubblePass(int* a, const int last, int j)
{
    if (j < last)
    {
        if (a[j] > a[j + 1])
        {
            int t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
        }
        BubblePass(a, last, j + 1);
    }
}

void Sort(int* a, const int size, int i)
{
    if (i < size - 1)
    {
        BubblePass(a, size - 1 - i, 0);
        Sort(a, size, i + 1);
    }
}

template <typename T>
void Print(T* a, const int size, int i)
{
    cout << setw(8) << a[i];
    if (i < size - 1)
        Print<T>(a, size, i + 1);
    else
        cout << endl;
}

template <typename T>
void BubblePass(T* a, const int last, int j)
{
    if (j < last)
    {
        if (a[j] > a[j + 1])
        {
            T t = a[j];
            a[j] = a[j + 1];
            a[j + 1] = t;
        }
        BubblePass<T>(a, last, j + 1);
    }
}

template <typename T>
void Sort(T* a, const int size, int i)
{
    if (i < size - 1)
    {
        BubblePass<T>(a, size - 1 - i, 0);
        Sort<T>(a, size, i + 1);
    }
}