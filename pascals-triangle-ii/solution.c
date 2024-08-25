/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getRow(int rowIndex, int* returnSize) {
    int* result = (int*) malloc(sizeof(int) * (rowIndex + 1));
    result[0] = 1;
    result[rowIndex] = 1;
    
    for (int i = 1; i <= rowIndex; i++) {
        result[i] = 1;
        for (int j = i - 1; j >= 1; j--) {
            result[j] = result[j] + result[j - 1];
        }
    }
    
    *returnSize = rowIndex + 1;
    return result;
}
