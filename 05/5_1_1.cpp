#include<stdio.h>

int main() {
    int box[5]; // 配列start
    int i;
    double sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf_s("%d番学生の点数", i + 1);
        scanf_s("%d", &box[i]);
    }
  

    for (i = 0; i < 5; i++) {
        printf_s("%d番学生の点数は%dです。\n", i + 1, box[i]);
        sum += box[i];
    }
    printf_s("クラスの平均点は%lfです。\n", sum / 5);
    return 0;
}
