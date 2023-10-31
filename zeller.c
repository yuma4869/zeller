#include <stdio.h>

char* zeller(int year, int month, int day) {
	if (month == 1 || month == 2) {
		month += 12;
		year -= 1;
	}

	int h = (year + year / 4 - year / 100 + year / 400 + (13 * month + 8) / 5 + day) % 7;
	char* days[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	return days[h];
}

int main() {
	int year, month, day;

	// 入力を取得する
	printf("year : ");
	scanf_s("%d", &year);

	printf("month : ");
	scanf_s("%d", &month);

	printf("day : ");
	scanf_s("%d", &day);

	// 計算を行う
	char* day_of_week = zeller(year, month, day);

	// 結果を出力する
	printf("%s\n", day_of_week);

	return 0;
}
