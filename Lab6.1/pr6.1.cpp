#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

void Create(int* r, const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++)
        r[i] = Low + rand() % (High - Low + 1);
}

void Print(int* r, const int size) {
    for (int i = 0; i < size; i++)
        cout << setw(5) << r[i];
    cout << endl;
}

int Sum(int* r, const int size, int& count) {
    int sum = 0;
    count = 0;
    for (int i = 0; i < size; i++) {
        if (r[i] % 2 != 0 && r[i] % 13 != 0) {
            count++;
            sum += r[i];
        }
    }
    return sum;
}

void ReplaceWithZeros(int* r, const int size) {
    for (int i = 0; i < size; i++) {
        if (r[i] % 2 != 0 && r[i] % 13 != 0) {
            r[i] = 0;
        }
    }
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    const int n = 23;
    int r[n];
    int Low = 4;
    int High = 68;
    Create(r, n, Low, High);

    cout << "Initial array: ";
    Print(r, n);

    int count = 0;
    int sum = Sum(r, n, count);
    ReplaceWithZeros(r, n);

    cout << "Modified array: ";
    Print(r, n);

    cout << "Number of elements: " << count << endl;
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
