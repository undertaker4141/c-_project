#include <bits/stdc++.h>

using namespace std;

int main() {
    int year, month, day, clock, minutes;
    scanf("%d-%d-%d-%d-%d", &year, &month, &day, &clock, &minutes);
    bool pass = false;
    if (year < 2024) {
        pass = true;
    } else if (year == 2024) {
        if (month < 10) {
            pass = true;
        } else if (month == 10) {
            if (day < 5) {
                pass = true;
            } else if (day == 5) {
                if (clock < 12) {
                    pass = true;
                } else if (clock == 12) {
                    if (minutes == 0) {
                        pass = true;
                    } else {
                        pass = false;
                    }
                } else { // clock > 12
                    pass = false;
                }
            } else { // day == 5
                pass = false;
            }
        } else { // month < 10
            pass = false;
        }
    } else { // year > 2024
        pass = false;
    }

    if (pass) {
        printf("GOOD");
    } else {
        printf("TOO LATE!!");
    }
    return 0;
}