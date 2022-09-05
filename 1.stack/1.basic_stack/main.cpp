#include <iostream>
#include <string>
#include <map>
#include "stack.h"

using namespace std;

static map<string, int> m;
enum {PUSH, POP, SIZE, EMPTY, TOP};

void cmd_init() {
    m["push"] = PUSH;
    m["pop"] = POP;
    m["size"] = SIZE;
    m["empty"] = EMPTY;
    m["top"] = TOP;
}

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // freopen("input.txt", "r", stdin);

    int N, element;
    string cmd;
    cmd_init();

    cin >> N;
    stack stk(N);

    for (; N > 0; --N) {
        cin >> cmd;

        switch (m[cmd])
        {
        case PUSH:
            cin >> element;
            stk.push(element);
            break;
        case POP:
            cout << stk.pop() << endl;;
            break;
        case SIZE:
            cout << stk.size() << endl;
            break;
        case EMPTY:
            cout << stk.empty() << endl;
            break;
        case TOP:
            cout << stk.top() << endl;
            break;
        default:
            break;
        }
    }
    
    return 0;
}
