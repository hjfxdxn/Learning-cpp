#include<stdio.h>

int main() {
	int age, numberofpeople; // user age and how many of people
	int num = 0;
	int money = 0;

	printf_s("���p�Ґ�����͂��Ă��������F  "); // input how many of people
	scanf_s("%d", &numberofpeople);

	while (num < numberofpeople){
		num++;
		printf_s("%d�l�ڂ̔N�����͂��Ă��������F ", num); //input age
		scanf_s("%d", &age);

		if (5 <= age && age <= 12) {
			printf_s("������500�~�ł��B\n");
			money += 500;
		}

		else if (13 <= age && age <= 65) {
			printf_s("������1000�~�ł��B\n");
			money += 1000;
		}

		else {
			printf_s("�����͖����ł�!\n");
		}
	}
	printf_s("���v������%d�~�ł��D", money); //output how much need to pay

	return 0;

}