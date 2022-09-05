#include <iostream>
#include <string>
#include <map>
#include "stack.h"

using namespace std;

constexpr int MAX_STR = 1000;

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);

    int N;
    char str[MAX_STR + 1];

    cin >> N;

    for (; N > 0; --N) {
        // 라인으로 읽어서 deli로 자르던지..
        cin >> str;
        cout << str;
    }
    
    return 0;
}
