#include <iostream> 
#include <iomanip> 
#include <time.h> 

using namespace std;

void Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
    if (i < size - 1)
        Create(a, size, Low, High, i + 1);
}
void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}
int Pos(int* a, int n, int i)
{
    if (i < n)
    {
        if (a[i] > 0)

            return 1 + Pos(a, n, i + 1);
        else
            return Pos(a, n, i + 1);
    }
    else
        return 0;
}


void FindZero(int* a, int n, int& index, int i) // {4, 5, 0, -3, 10, 18, 0, 2}
{
    if (i < n)
    {
        if (a[i] == 0) {
            index = i;
        }
        FindZero(a, n, index, i + 1);
    }

}

int Sum(int* a, const int size, int i)
{
    if (i < size)
    {
        return a[i] + Sum(a, size, i + 1);
    }
    else return 0;
}

void Sort(int* a, const int size, int i) 
{ 
    int min = a[i];
    int imin = i;
    for (int j = i + 1; j < size; j++)
        if (min > a[j])
        {
            min = a[j];
            imin = j;
        }
    a[imin] = a[i];
    a[i] = min;

    if (i < size - 2)
        Sort(a, size, i + 1);
}
int main()
{
    srand((unsigned)time(NULL));
    int n;

    cout << "n= "; cin >> n;

    int* a = new int[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High, 0);
    Print(a, n, 0);

    int S = 0;
    int index = -1;
    FindZero(a, n, index, 0);
    if (index != -1)
    {
        cout << "Sum = " << Sum(a, n, index) << endl;
    }
    else
    {
        cout << "There isn't zero" << endl;
    }

    Sort(a, n, 0);
    Print(a, n, 0);
    cout << "k+= " << Pos(a, n, 0) << endl;
    delete[]a;
    a = nullptr;
    return 0;
}