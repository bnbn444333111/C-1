#include <stdio.h>
int returnMaxValue(int num1, int num2, int num3); //함수 정의
int returnMinValue(int num1, int num2, int num3); //function declaration


int main(void)
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int resultMaxValue = 0;
	int resultMinValue = 0;

	printf("정수 3개 입력: ");
	scanf_s(" %d %d %d", &val1, &val2, &val3);

	resultMaxValue = returnMaxValue(val1, val2, val3);
	resultMinValue = returnMinValue(val1, val2, val3);

	printf("최댓값: %d, 최솟값: %d", resultMaxValue, resultMinValue);
	return 0;
}

int returnMaxValue(int num1, int num2, int num3) // 함수 구현
{
	int maximum = 0;
	if (num1 > num2) {
		if (num1 > num3) { // num1 > num2, num3
			maximum = num1;
		}
		else { // num3 >= num1 > num2
			maximum = num3; 
		}
	}
	else {
		if (num2 > num3) { // num2 >= num1, num3
			maximum = num2;
		}
		else { // num3 >= num2 >= num1 
			maximum = num3;
		}
	}
	return maximum;
}
int returnMinValue(int num1, int num2, int num3)
{
	int minimum = 0;
	if (num1 < num2) {
		if (num1 < num3) { // num1 < num2, num3
			minimum = num1;
		}
		else { // num3 <= num1 < num2
			minimum = num3;
		}
	}
	else {
		if (num2 < num3) { // num2 <= num1 or num2 < num3
			minimum = num2;
		}
		else { // num3 <= num2 <= num1
			minimum = num3;
		}
	}
	return minimum;
}