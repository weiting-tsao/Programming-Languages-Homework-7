#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* in, * out;
    int cnt;
    char str[100];

    // 開啟檔案
    in = fopen("welcome.txt", "r"); // 讀取檔案
    out = fopen("output.txt", "w"); // 寫入檔案

    // 逐行讀取與寫入
    while (!feof(in)) {
        cnt = fscanf(in, "%s", str); // 讀取一行字串
        if (cnt > 0) {
            fprintf(out, "%s\n", str); // 寫入另一檔案
        }
    }

    // 關閉檔案
    fclose(in);
    fclose(out);
    system("pause");
    return 0;
}