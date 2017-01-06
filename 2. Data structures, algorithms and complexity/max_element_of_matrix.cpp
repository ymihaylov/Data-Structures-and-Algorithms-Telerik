#include <iostream>
using namespace std;

// Сложност n - минаваме през всеки елемент поне по веднъж
int main() {
    int myints[] = {1, 2, 3, 15, 35, 12, 6};

    int max = myints[0];
    for (int i = 0; i < sizeof(myints) / sizeof(myints[0]); ++i) {
        if (myints[i] > max) {
            max = myints[i];
        }
    }

    cout << max << "\n";

    return 0;
}
