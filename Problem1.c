
#include <stdio.h>

#define MOD 1000000007

long long fib(int n) {
    if (n <= 1)
        return n;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = (a + b) % MOD;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    scanf("%d", &n);

    long long result = fib(n);
    printf("%lld\n", result);

    return 0;
}

