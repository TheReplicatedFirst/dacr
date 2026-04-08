#include <stdio.h>

int main() {
	int n;
	int divisor = 0;

	printf("Введіть число: ");
	scanf("%d", &n);

	if (n < 2) {
		printf("%d - не є простим числом.\n", n);
		return 0;
	}

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			divisor = i;
			break;
		}
	}

	if (divisor == 0) {
		printf("%d - просте число.\n", n);
	} else {
		printf("%d - складене число (ділиться на %d)\n", n, divisor);
	}

	return 0;
}