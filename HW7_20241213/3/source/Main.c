#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void) {
    FILE* fptr;
    char str[MAX], ch; // 宣告字元陣列 str，用來儲存由鍵盤輸入的字串
    int i = 0;

    // 以附加模式開啟檔案 "output.txt"
    fptr = fopen("output.txt", "a");
    printf("Please enter a string, Press ENTER key to end input:\n");

    // 從鍵盤讀取輸入字串直到按下 ENTER 或超過 MAX 字元
    while ((ch = getche()) != ENTER && i < MAX) {
        str[i++] = ch;
    }
    // 寫入換行字元到檔案
    putc('\n', fptr);

    // 寫入字串到檔案
    fwrite(str, sizeof(char), i, fptr);
    fclose(fptr); // 關閉檔案
    printf("\nFile attachment completed!!\n");
    system("pause");
    return 0;
}