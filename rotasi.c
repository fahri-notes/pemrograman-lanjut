#include <stdio.h>
#include <string.h>

void rotate(char *str, int n) {
    int len = strlen(str);
    n %= len;
    char temp[n];
    strncpy(temp, str + len - n, n);
    memmove(str + n, str, len - n + 1);
    strncpy(str, temp, n);
}

int main() {
    char str[100];
    int n;

    printf("Masukkan sebuah kata: ");
    scanf("%s", str);

    printf("Masukkan jumlah rotasi: ");
    scanf("%d", &n);

    rotate(str, n);

    printf("Hasil rotasi: %s\n", str);

    return 0;
}