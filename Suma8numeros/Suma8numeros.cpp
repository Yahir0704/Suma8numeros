#include <iostream>
using namespace std;

int main() {
    const int NUM = 8;
    int nums[NUM];
    int total = 0;


    for (int i = 0; i < NUM; i++) {
        cout << "Ingresa numero: ";
        cin >> nums[i];
        total += nums[i];
    }


    cout << "El resultado es: " << total << endl;

    return 0;
}