#include <iostream>
using namespace std;

const int SIZE = 3;
bool array_compare(double[], double[], int);

int main()
{
    double arr1[SIZE] = {3.0, 2.0, 1.0};
    double arr2[SIZE] = {3.0, 2.0, 1.0};
    bool equals = array_compare(arr1, arr2, SIZE);
    if (equals == true) {
        cout << "Arrays are equal" << endl;
    }
    else {
        cout << "Arrays are not equal" << endl;
    }
    return 0;
}

bool array_compare(double arr1[], double arr2[], int SIZE) {
    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
        else {
            return true;
        }
    }
}