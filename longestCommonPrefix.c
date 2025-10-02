#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Allocate memory for the prefix (max possible length = length of first string)
    char* prefix = (char*)malloc(strlen(strs[0]) + 1);
    strcpy(prefix, strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }
        prefix[j] = '\0'; // Truncate prefix at mismatch
    }

    return prefix;
}
