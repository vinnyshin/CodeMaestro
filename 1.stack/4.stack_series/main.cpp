#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <sstream>
#include "stack.h"

using namespace std;

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);

    int series_cnt = 1, target, prev = -1, N = 1;
    stack<int> stk{MAX_N};
    char buffer[200000];
    int buffer_size = 0;

    cin >> series_cnt;

    for (; series_cnt > 0; --series_cnt) {
        cin >> target;
    
        if (prev < target) {
            int ret = stk.pop();
            if (ret != prev) {
                cout << "NO" << endl;
                return 0;
            }
            buffer[buffer_size++] = '-';
            for (; N <= target; ++N) {
                stk.push(N);
                buffer[buffer_size++] = '+';
            }
        } else { // prev > target
            int ret = stk.pop();
            if (ret != prev) {
                cout << "NO" << endl;
                return 0;
            }
            buffer[buffer_size++] = '-';
        }
        prev = target;
    }

    int ret = stk.pop();
    if (ret != prev) {
        cout << "NO" << endl;
        return 0;
    }
    buffer[buffer_size++] = '-';

    for (size_t i = 1; i < buffer_size; ++i) {
        printf("%c\n", buffer[i]);
    }
    
    return 0;
}
