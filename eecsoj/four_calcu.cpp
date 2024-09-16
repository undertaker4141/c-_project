#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int temp;
    int size = s.size();
    cout<<s<<endl;
    for (int head = 0, tail = 2; head < size && tail < size;) {
        char middle = s[tail-1];
        if (middle == '+' || middle == '-') {
            // head = tail+2;
            // tail += 2;
            temp = tail;
            tail = temp +=2;
            head = temp;
            continue;
        } else if(middle == '*' || middle == '/') {
            int result;
            if (middle == '*') {
                result = s[head] * s[tail];
            } else if (middle == '/') {
                result = s[head] / s[tail];
            }
            s[head] = result;
            for(int i = head +1;i<tail;i++){s[i] = '$';}
            //s[(head + tail) / 2] = '$'; // ignore next loop
            s[tail] = '$';
            tail += 2;
        }
    }

    cout << "DEBUGGGGGG" << endl;
    cout << s << endl;

    int result = 0;
    bool minus_next = false;
    for (int i = 0; i < size; i++) {
        if (s[i] == '$') {
            continue;
        } else if (s[i] == '+') {
            minus_next = false;
        } else if (s[i] == '-') {
            minus_next = true;
        } else {
            int n = (int)s[i];
            if (minus_next) {
                result -= n;
            } else {
                result += n;
            }
        }
    }

    cout << result;
    return 0;
}