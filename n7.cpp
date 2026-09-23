#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int onlik = n / 10;
    int birlik = n % 10;

    cout << onlik + birlik;

    return 0;
}
