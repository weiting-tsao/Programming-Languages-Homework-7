#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void) {
    FILE* fptr;
    char str[MAX];
    int bytes;

    // 以唯讀模式開啟檔案 "output.txt"
    fptr = fopen("output.txt", "r");

    // 使用 fread() 讀取檔案內容直到檔尾
    while (!feof(fptr)) {
        bytes = fread(str, sizeof(char), MAX - 1, fptr); // 讀取最多 MAX-1 個字元
        str[bytes] = '\0'; // 確保字串結尾
        printf("%s\n", str); // 印出檔案內容
    }

    fclose(fptr); // 關閉檔案
    system("pause");
    return 0;
}