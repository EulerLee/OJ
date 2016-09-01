#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    scanf("%d", &T);
    int i;
    for(i = 0; i < T; i ++){
        long n, n3, n5, n15;
        long res;
        scanf("%ld", &n);
        n3 = n/3;
        n5 = n/5;
        n15 = n/15;
        if(n%3 == 0){
            n3 --;
        }
        if(n%5 == 0){
            n5 --;
        }
        if(n%15 == 0){
            n15 --;
        }
        res = (n3 + 1) * n3 * 3 / 2 +(n5 + 1) * n5 * 5 / 2 - (n15 + 1) * n15 * 15 / 2;
        printf("%ld\n", res);
    }
    return 0;
}
