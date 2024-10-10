#include<stdio.h>

int main() {
	int age, numberofpeople; // user age and how many of people
	int num = 0;
	int money = 0;

	printf_s("利用者数を入力してください：  "); // input how many of people
	scanf_s("%d", &numberofpeople);

	while (num < numberofpeople){
		num++;
		printf_s("%d人目の年齢を入力してください： ", num); //input age
		scanf_s("%d", &age);

		if (5 <= age && age <= 12) {
			printf_s("料金は500円です。\n");
			money += 500;
		}

		else if (13 <= age && age <= 65) {
			printf_s("料金は1000円です。\n");
			money += 1000;
		}

		else {
			printf_s("料金は無料です!\n");
		}
	}
	printf_s("合計料金は%d円です．", money); //output how much need to pay

	return 0;

}