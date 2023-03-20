printf("Masukkan string pertama: ");
    gets(str1);
    
    printf("Masukkan string kedua: ");
    gets(str2);
    
    if (is_rotation(str1, str2)) {
        printf("True, %s adalah rotasi dari %s", str2, str1);
    } else {
        printf("False, %s bukan rotasi dari %s", str2, str1);
    