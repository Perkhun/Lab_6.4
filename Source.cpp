#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, const int Low, const int High)
{
    for (int i = 0; i < size; i++)
        a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
    for (int i = 0; i < size; i++)
        cout << setw(4) << a[i];
    cout << endl;
}
int Pos(int* a, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
        if (a[i] > 0)
            k++;
    return (k);
}
int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == 0)

        {
            for (a[i]; i < size; i++)
            

                S += a[i];
            }
    }
    return S;
}


void Sort(int* a, const int size )
{
    for (int i = 1; i < size; i++)
    {
        
        for (int j = 0; j < size - i; j++)
            if (a[j]>a[j+1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
               
            }
        
    }
}



int main()
{
    srand((unsigned)time(NULL)); 
    int n;
    
    cout << "n= "; cin >> n;
        
    int* a = new int[n];
    int Low = -10;
    int High = 10;

    Create(a, n, Low, High);
    Print(a, n);

    

    
    cout << "Sum = " << Sum(a, n) << endl;
   
    Sort(a, n);
    Print(a, n);
    cout << "k+= " << Pos(a, n) << endl;
    
    delete[]a;
    a = nullptr;
    return 0;
}