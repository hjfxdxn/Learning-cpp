#include<stdio.h>

int main() {
    int num = 1, mathin;
    int mathone, mathtwo;


    printf_s("�������������Ȃ�񐔂̏������͂��Ă��������F ");
    scanf_s("%d", &mathin);

    while (mathin >= num) {

        printf_s("%d�ڂ̔�r\n", num);
        printf_s("�P�ڂ̐�������͂��Ă�������");
        scanf_s("%d", &mathone);

        printf_s("2�ڂ̐�������͂��Ă�������");
        scanf_s("%d", &mathtwo);

        if (mathone > mathtwo) {
            printf_s("%d��%d���傫���ł��B\n", mathone, mathtwo);
        }
        else if (mathone < mathtwo) {
            printf_s("%d��%d��菬�����ł��B\n", mathone, mathtwo);
        }
        else if (mathone == mathtwo) {
            printf_s("%d��%d�͓������ł��B\n", mathone, mathtwo);
            num++;
        }
    }
    printf_s("2�̐���%d�񓙂����Ȃ����̂ŏI�����܂��B",mathin);
    return 0;
}