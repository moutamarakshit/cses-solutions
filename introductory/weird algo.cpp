#include<bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    long long n = num;
    while (n != 1) {
        cout << n << " ";
        if (n & 1) {
            n *= 3;
            n++;
        }
        else n /= 2;
    }
    cout << 1;
    return 0;
}
