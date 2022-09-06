#include <iostream>
#include <string>
#include <string.h>
#include <map>
#include <sstream>
#include "stack.cpp"

using namespace std;

constexpr int MAX_STR = 1000;
constexpr int MAX_WORD = 20;

int main(int argc, char const *argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("input.txt", "r", stdin);

    int N;
    char str[MAX_STR + 1];
    string word;
    stack<char> stk{MAX_WORD};

    cin >> N;
    cin.ignore(); // eliminate '\n'

    for (; N > 0; --N) {
        cin.getline(str, 1001);
        stringstream sstream(str);

        while (getline(sstream, word, ' ')) {
            for (size_t i = 0; i < word.size(); i++) {
                stk.push(word[i]);
            }

            while (!stk.empty()) {
                cout << stk.pop();
            }

            cout << ' ';
        }

        cout << endl;
    }
    
    return 0;
}
