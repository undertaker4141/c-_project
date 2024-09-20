#include <bits/stdc++.h>
using namespace std;
int undertaker(int a, int i) {
    if (a > 99999) {
        return -1; // 沒有
    } else if (a % 100000 != a % 10000 && a % 10000 != a % 1000 &&
               a % 1000 != a % 100 && a % 100 != a % 10 &&
               a % 10 != a % 100000) {
        int s1 = a % 100000;
        int s2 = a % 10000;
        int s3 = a % 1000;
        int s4 = a % 100;
        int s5 = a % 10;

        int p1 = i % 100000;
        int p2 = i % 10000;
        int p3 = i % 1000;
        int p4 = i % 100;
        int p5 = i % 10;

        if (s1 != p1 && s1 != p2 && s1 != p3 && s1 != p4 && s1 != p5) {
            if (s2 != p1 && s2 != p2 && s2 != p3 && s2 != p4 && s2 != p5) {
                if (s3 != p1 && s3 != p2 && s3 != p3 && s3 != p4 && s3 != p5) {
                    if (s4 != p1 && s4 != p2 && s4 != p3 && s4 != p4 &&
                        s4 != p5) {
                        if (s5 != p1 && s5 != p2 && s5 != p3 && s5 != p4 &&
                            s5 != p5) {
                            return (a);
                        } else {
                            return -1; // 沒有
                        }
                    } else {
                        return -1; // 沒有
                    }
                } else {
                    return -1; // 沒有
                }
            } else {
                return -1; // 沒有
            }
        } else {
            return -1; // 沒有
        }
    }
    else{
        return -1; // 沒有
    }
}

int main() {
    int n = -1; // 題目輸入之整除商
    vector<int> ansarr;
    while (n != 0) {
        scanf("%d", &n);
        for (int i = 1234; i < 100000; i++) {
            if (i % 100000 != i % 10000 && i % 10000 != i % 1000 &&
                i % 1000 != i % 100 && i % 100 != i % 10 &&
                i % 10 != i % 100000) {
                int dec = n * i;
                ansarr.push_back(undertaker(dec, i));
            }
        }
        int eggcounter = 0;
        for (int i = 0; i < ansarr.size(); i++) {
            if (ansarr[i] != -1) {
                eggcounter++;
            }
        }
        if (eggcounter = 0) {
            printf("There are no solutions for %d\n\n.", n);
        } else if(n!=0) {
            for (int i = 0; i < ansarr.size(); i++) {
                printf("%d / %d = %d\n\n", ansarr[i] / n, ansarr[i], n);
            }
        }
        else{

        }
    }

    return 0;
}