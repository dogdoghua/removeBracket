#include <bits/stdc++.h>
using namespace std;

int removeBracket(string str) {
    int stk_size = 0, count = 0;
    
    for (char &ch: str) {
        if (ch == '(') {
            stk_size++;
        }
        else if (stk_size > 0) {
            stk_size--;
        }
        else { // invalid when stack_size == 0 (str == "))((")
            count++;
        }
    }
    count += stk_size;
    return count;
}
