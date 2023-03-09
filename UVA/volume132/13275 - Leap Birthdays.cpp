#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
using namespace std;

int main() {
    int testcase, cases = 0;
    scanf("%d", &testcase);
    while (testcase--) {
        int dd, mm, yy, Y;
        scanf("%d %d %d %d", &dd, &mm, &yy, &Y);
        printf("Case %d: ", ++cases);
        if (dd != 29 || mm != 2) {
            printf("%d\n", Y-yy);
        } else {
            int c1 = Y/4 - Y/100 + Y/400;
            int c2 = yy/4 - yy/100 + yy/400;
            printf("%d\n", c1-c2);
        }
    }
    return 0;
}