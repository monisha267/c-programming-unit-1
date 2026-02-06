// program to check a string is a valid identifier in c language
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int is_valid_identifier(const char *str) {
    // An identifier must start with a letter (A-Z, a-z) or underscore (_)
    if (!(isalpha(str[0]) || str[0] == '_')) {
        return 0;
    }
    // The rest of the characters must be letters, digits (0-9), or underscores
    for (int i = 1; str[i] != '\0'; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            return 0;
        }
    }
    return 1;
}