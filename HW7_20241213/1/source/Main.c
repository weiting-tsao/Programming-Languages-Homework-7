#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fptr; // 宣告指向檔案的指標 fptr
    char ch;    // 宣告字元變數 ch，用來接收讀取的字元
    int count = 0; // 宣告整數 Count，用來計算檔案的字數

    // 嘗試開啟檔案 "welcome.txt" 並以唯讀模式讀取
    fptr = fopen("welcome.txt", "r");

    if (fptr != NULL) { // 如果 fopen() 的傳回值不為 NULL，表示檔案開啟成功

        // 讀取檔案內容直到 EOF
        while ((ch = getc(fptr)) != EOF) {
            printf("%c", ch); // 印出讀取的字元
            count++;     // 計算字元數
        }

        fclose(fptr); // 關閉檔案
        printf("\nThere are %d characters in total\n", count);
    }
    else
        // 如果檔案開啟失敗，輸出錯誤訊息
        printf("File opening failed !!\n");


    system("pause"); // 暫停系統，按任意鍵繼續
    return 0;
}