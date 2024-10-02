#include <bits/stdc++.h>

using namespace std;

int smallestRoundNumber(int n) {
    for (int i = n + 1;; i++) {
        int temp = i;
        int temp_cc = temp;
        int counter = 0;

        do {
            temp_cc /= 10;
            counter++;
        } while (temp_cc != 0);

        if (counter % 2 == 0) { // 判斷偶數回文
            stack<int> dector;
            do {
                if (!dector.empty() && dector.top() == temp % 10) {
                    dector.pop();
                    temp /= 10;
                } else {
                    dector.push(temp % 10);
                    temp /= 10;
                }

            } while (temp != 0);

            if (dector.empty()) {
                return i;
            } else {
                continue;
            }
        } else { // 判斷奇數回文
            vector<int> arr;
            do {
                arr.push_back(temp % 10);
                temp /= 10;
            } while (temp != 0);

            arr.erase(arr.begin() + int(arr.size() / 2));
            stack<int> dector;

            for (int i : arr) {
                if (!dector.empty() && dector.top() == i) {
                    dector.pop();
                } else {
                    dector.push(i);
                }
            }
            if (dector.empty()) {
                return i;
            } else {
                continue;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    cout << smallestRoundNumber(n);
    return 0;
}