#include<stdio.h>

int main() {
    double runtimebox[5]; // 配列start
    int i, j;
    double temp;
    double sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf_s("%d人目の100ｍあたりのランニング時間を入力してください(秒)：", i + 1);
        scanf_s("%lf", &runtimebox[i]);
    }
    // from big one to smell one
    for (i = 0; i < 5 - 1; i++) { // change time
        for (j = 0; j < 5 - 1 - i; j++) {
            if (runtimebox[j] > runtimebox[j + 1]) {
                temp = runtimebox[j];         // change
                runtimebox[j] = runtimebox[j + 1];
                runtimebox[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf_s("%d位のランニング時間は%lfです。\n", i + 1, runtimebox[i]);
        sum += runtimebox[i];
    }
    printf_s("クラスの平均ランニング時間は%lfです。\n", sum / 5);
    return 0;
}
