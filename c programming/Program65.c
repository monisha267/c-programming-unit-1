#include <stdio.h>
#include <string.h>
#include <ctype.h>

int longestSubstring(char *s) {
    int last[256];
    for (int i = 0; i < 256; i++)
        last[i] = -1;

    int left = 0, digitCount = 0, maxLen = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        if (last[(unsigned char)s[right]] >= left) {
            // remove digits while shrinking window
            for (int i = left; i <= last[(unsigned char)s[right]]; i++) {
                if (isdigit(s[i]))
                    digitCount--;
            }
            left = last[(unsigned char)s[right]] + 1;
        }

        last[(unsigned char)s[right]] = right;

        if (isdigit(s[right]))
            digitCount++;

        if (digitCount > 0 && (right - left + 1) > maxLen)
            maxLen = right - left + 1;
    }
    return maxLen;
}

int main() {
    char s[] = "ab1cdea23";
    printf("Length = %d", longestSubstring(s));
    return 0;
}