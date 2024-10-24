#include<stdio.h>

int main() {
    int box[5]; // 配列start
    int i, j, temp;
    double sum = 0;

    for (i = 0; i < 5; i++)
    {
        printf_s("%d番学生の点数", i + 1);
        scanf_s("%d", &box[i]);
    }
    // from big one to smell one
    for (i = 0; i < 5 - 1; i++) { // change time
        for (j = 0; j < 5 - 1 - i; j++) { 
            if (box[j] < box[j + 1]) { 
                temp = box[j];         // change
                box[j] = box[j + 1];
                box[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        printf_s("%d番学生の点数は%dです。\n", i + 1, box[i]);
        sum += box[i];
    }
    printf_s("クラスの平均点は%lfです。\n", sum/5);
    return 0;
}
