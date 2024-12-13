﻿#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr1, * fptr2; // 宣告指向檔案的指標 fptr1 與 fptr2
    char ch;

    // 開啟可讀取的檔案 "welcome.txt"
    fptr1 = fopen("welcome.txt", "r");

    // 開啟可寫入的檔案 "output.txt"
    fptr2 = fopen("output.txt", "w");

    if ((fptr1 != NULL) && (fptr2 != NULL)) { // 如果兩個檔案都成功開啟
        while ((ch = getc(fptr1)) != EOF) { // 判斷是否到達檔尾
            putc(ch, fptr2); // 將字元 ch 寫到 fptr2 所指向的檔案
        }

        fclose(fptr1); // 關閉 fptr1 所指向的檔案
        fclose(fptr2); // 關閉 fptr2 所指向的檔案

        printf("File copy completed !!\n");
    }
    else {
        printf("File opening failed !!\n");
    }

    system("pause");
    return 0;
}