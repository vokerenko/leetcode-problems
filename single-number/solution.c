#include <stdbool.h>

int singleNumber(int* nums, int numsSize) {
	for (int i = 0; i < numsSize; i++) {
		bool equal = false;
		for (int j = 0; j < numsSize; j++) {
			if (i != j) {
				equal = !(nums[i] ^ nums[j]);
				if (equal) {
					break;
				}
			}
		}
		if (!equal) {
			return nums[i];
		}
	}
	return 0;
}
