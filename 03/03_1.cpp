#include<stdio.h>

int main() {
    int num = 1, mathin;
    int mathone, mathtwo;


    printf_s("整数が等しくなる回数の上限を入力してください： ");
    scanf_s("%d", &mathin);

    while (mathin >= num) {

        printf_s("%d目の比較\n", num);
        printf_s("１つ目の数字を入力してください");
        scanf_s("%d", &mathone);

        printf_s("2つ目の数字を入力してください");
        scanf_s("%d", &mathtwo);

        if (mathone > mathtwo) {
            printf_s("%dは%dより大きいです。\n", mathone, mathtwo);
        }
        else if (mathone < mathtwo) {
            printf_s("%dは%dより小さいです。\n", mathone, mathtwo);
        }
        else if (mathone == mathtwo) {
            printf_s("%dは%dは等しいです。\n", mathone, mathtwo);
            num++;
        }
    }
    printf_s("2つの数が%d回等しくなったので終了します。",mathin);
    return 0;
}