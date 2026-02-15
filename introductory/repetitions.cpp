#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n = str.length();
    int cnt = 1, maxLen = 1;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            cnt++;
        }
        else cnt = 1;
        maxLen = max(cnt, maxLen);
    }
    cout << maxLen;
}
