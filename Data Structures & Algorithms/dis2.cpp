#include <stdio.h>

#define OFFSET 500000
#define SIZE 1500010

int main() {
    size_t n;
    scanf("%d", &n);

    size_t freq[SIZE] = {0};
    size_t x;

    for (size_t i = 0; i < n; i++) {
        scanf("%d", &x);
        freq[x + OFFSET]++;
    }

    size_t distinct = 0;
    for (size_t i = 0; i < SIZE; i++) {
        if (freq[i] > 0)
            distinct++;
    }

    printf("%d\n", distinct);
    return 0;
}
