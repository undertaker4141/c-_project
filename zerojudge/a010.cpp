#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;//
    cin >> n;//
    int pvr = n;
    int temp = 1;//
    int arr[n + 1];//
    for (int i = 0; i <= n; i++) {//
        arr[i] = 0;//
    }//
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            if (n < i)
                break;
            n /= i;
            arr[i]++;
            temp = max(temp, i);
        }
    }
    for (int i = 2; i <= pvr; i++) {
        if (arr[i] != 0&&arr[i]!=1) {
            cout << i << '^' << arr[i];
            if (i != temp) {
                cout << " * ";
            }
            }
            else if(arr[i]==1){
                cout<<i;
                if (i != temp) {
                cout << " * ";
            }
        }
    }
    // cout << '\n';
    // cout << temp;
    // for (int i = 0; i <= pvr; i++) {
    //     cout << arr[i] << endl;
    // }
    return 0;
}
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}