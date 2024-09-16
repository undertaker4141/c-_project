#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int temp;
    int size = s.size();
    cout<<s<<endl;
    for (int head = 0, tail = 2; head < size-2 && tail < size;) {
        char middle = s[tail-1];
        if (middle == '+' || middle == '-') {
            // head = tail+2;
            // tail += 2;
            if(tail==size-1){
                break;
            }
            temp = tail;
            tail = temp +2;
            head = temp;

            cout<<((int)s[head]-48)<<","<<((int)s[tail]-48)<<"+-"<<endl;
            //cout<<"kk"<<endl;
            //continue;
        } else if(middle == '*' || middle == '/') {
            int result;
            if (middle == '*') {
                result = ((int)s[head]-48 )* ((int)s[tail]-48);
                cout<<((int)s[head]-48)<<","<<((int)s[tail]-48)<<"*"<<endl;
            } else if (middle == '/') {
                result = ((int)s[head]-48) / ((int)s[tail]-48);
                cout<<((int)s[head]-48)<<","<<((int)s[tail]-48)<<"/"<<endl;
            }
            cout<<result<<"rr"<<endl;
            s[head] = result+48;
            //cout<<(int)s[head]<<endl;
            for(int i = head +1;i<tail;i++){s[i] = '$';}
            //s[(head + tail) / 2] = '$'; // ignore next loop
            s[tail] = '$';
            if(tail==size-1){
                break;
            }
            tail += 2;
        }
    }

    cout<<endl;
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
            int n = (int)s[i]-48;
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