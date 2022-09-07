#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <sstream>
#include "stack.h"

using namespace std;

constexpr int MAX_STR = 50;

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);

    int N;
    char str[MAX_STR + 1];
    stack<char> stk{MAX_STR};

    cin >> N;

    for (; N > 0; --N) {
        stk.init();
        bool flag = true;
        cin >> str;
    
        for (size_t i = 0; i < strlen(str); i++) {
            if (str[i] == '(') {
                stk.push(str[i]);
            } else {
                if(stk.pop() == -1) {
                    flag = false;
                    break;
                }
            }
        }

        if (!flag) {
            cout << "NO" << endl;
        } else {
            if (stk.empty()) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
