#include <stdbool.h>

bool isPalindrome(int x) {
	if (x < 0) return false;
	int tmp = x;
	int magnitude = 0;
	while(tmp > 0) {
		magnitude++;
		tmp /= 10;
	}
	int* numbers = malloc(magnitude * sizeof(int));
	tmp = x;
	int j = magnitude;
	while(tmp > 0) {
		j--;
		numbers[j] = tmp % 10;
		tmp /= 10;
	}
	for (int i = 0; i < magnitude / 2; i++) {
		if (numbers[i] != numbers[magnitude - i - 1]) {
			free(numbers);
			return false;
		}
	}
	free(numbers);
	return true;
}

