#include <iostream>
#include <cstdlib>
using namespace std;

int n;
int arr[20];

void inputData(int arr[], int &n)
{
    cout << " ***************************************************" << endl;
    cout << " **         PENERAPAN ALGORITMA SHELL SORT        **" << endl;
    cout << " **                  UMY 105                      **" << endl;
    cout << " ***************************************************" << endl;
    cout << endl;

    cout << " Masukkan panjang array: ";
    cin >> n;

    if (n > 20)
    {
        cout << " element tidak boleh melebihi 20" << endl;
        exit(0);
    }

    cout << " Masukkan " << n << " Data yang akan diurutkan :\n";
    for (int i = 0; i < n; i++)
    {
        cout << " Data ke-" << i + 1 << " : ";
        cin >> arr[i];
    }
    cout << endl;
}

void outputdata(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << "[" << arr[i] << "]";
    }
    cout << endl;
}
