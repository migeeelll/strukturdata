#include <iostream>
using namespace std;

void tukarValue(int a, int b, int c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

void tukarPointer(int *a, int *b, int *c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}
void tukarReference(int &a, int &b, int &c)
{
    int temp = a;
    a = b;
    b = c;
    c = temp;
}
int main()
{
    int a = 7, b = 8, c = 9;
    cout << "Sebelum ditukar           -> a = " << a << ", b = " << b << ", c = " << c << " (Tetap)" << endl;
    tukarPointer(&a, &b, &c);
    cout << "Setelah Call by Pointer   -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah)" << endl;
    tukarReference(a, b, c);
    cout << "Setelah Call by Reference -> a = " << a << ", b = " << b << ", c = " << c << " (Berubah lagi)" << endl;
    return 0;
}