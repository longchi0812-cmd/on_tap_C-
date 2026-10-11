#include <iostream>
using namespace std;

int main() {
    // Dòng này giúp t?i uu t?c d? nh?p xu?t d? li?u trong C++
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b;
    cin >> a >> b;

    // Toán t? / l?y ph?n nguyên, toán t? % l?y ph?n du
    long long phanNguyen = a / b;
    long long phanDu = a % b;

    cout << phanNguyen << " " << phanDu << "\n";

    return 0;
}

