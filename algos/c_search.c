#include <stdio.h>

#define INT_OFFSET 500000
#define INT_SIZE 1000010
#define CHAR_SIZE 256

int freq_int[INT_SIZE] = {0};

int freq_char[CHAR_SIZE] = {0};

void 
build_freq_int(int *a,
              int n){
    for(int i = 0; i < n; i++)
        freq_int[a[i] + INT_OFFSET]++;
}

void
build_freq_string(char *s){
    for(int i = 0; s[i]; i++)
        freq_char[(unsigned char)s[i]]++;
}

int exists_int(int x){
    return freq_int[x + INT_OFFSET] > 0;
}

int exists_char(char c){
    return freq_char[(unsigned char)c] > 0;
}
