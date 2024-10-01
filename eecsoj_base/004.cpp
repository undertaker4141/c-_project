#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int n;
    scanf("%llx", &n);
    // printf("%x\n", n);
    vector<int> arr[4];
    int temp = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = i; j < i + 2; j++) {
            temp = n % 16;
            for (int k = 0; k < 4; k++) {
                arr[i].push_back(temp % 2);
                temp /= 2;
            }
            n /= 16;
        }
    }

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 8; j++) {

    //         printf("%d", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");

    int oneCounter[4]{0, 0, 0, 0};

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 8; j++) {
            if (arr[i][j] == 1) {
                oneCounter[i]++;
            }
        }
    }

    int tempCounter[4];
    for (int i = 0; i < 4; i++) {
        tempCounter[i] = oneCounter[i];
    }

    sort(begin(tempCounter), end(tempCounter));

    bool coutMin = true;
    if (tempCounter[0] == tempCounter[1]) {
        coutMin = false;
    }

    if (coutMin) {
        for (int i = 0; i < 4; i++) {
            if (tempCounter[0] == oneCounter[i]) {
                for (int j = 7; j >= 0; j--) {
                    printf("%d", arr[i][j]);
                }
            }
        }
    } else {
        vector<int> comp;
        for (int i = 0; i < 4; i++) {
            if (tempCounter[0] == oneCounter[i]) {
                int sum = 0;
                for (int j = 7; j >= 0; j--) {
                    sum += arr[i][j] * pow(2, j);
                }
                comp.push_back(sum);
            }
        }

        sort(comp.begin(), comp.end());

        for (int i = 0; i < 4; i++) {
            if (tempCounter[0] == oneCounter[i]) {
                int sum = 0;
                for (int j = 7; j >= 0; j--) {
                    sum += arr[i][j] * pow(2, j);
                }
                if (sum == comp[comp.size() - 1]) {
                    for (int j = 7; j >= 0; j--) {
                        printf("%d", arr[i][j]);
                    }
                    break;
                }
            }
        }
    }

    // printf("\n");
    // for (int i = 0; i < 4; i++) {
    //     printf("%d", tempCounter[i]);
    // }

    return 0;
}