#include <stdio.h>
#include <string.h>

int is_rotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return 0;  // jika panjang string tidak sama, maka bukan rotasi
    }
    
    char temp[len1 * 2 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);  // menggabungkan string pertama dengan dirinya sendiri
    
    if (strstr(temp, str2) != NULL) {
        return 1;  // jika string kedua merupakan substring dari temp, maka true (rotasi)
    } else {
        return 0;  // jika tidak, maka false (bukan rotasi)
    }
}

int main() {
    char str1[] = "taka", str2[] = "atak";
    
    if (is_rotation(str1, str2)) {
        printf("True, %s adalah rotasi dari %s", str2, str1);
    } else {
        printf("False, %s bukan rotasi dari %s", str2, str1);
    }    
    return 0;
}