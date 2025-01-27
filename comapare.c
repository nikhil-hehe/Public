#include <stdio.h>
#include <string.h>

int compareStrings(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) { 
        str1++;
        str2++;
    }
    return (unsigned char)*str1 - (unsigned char)*str2;  
}

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";

    int result = compareStrings(str1, str2);

    if (result == 0) {
        printf("The strings are identical.\n");
    } else if (result < 0) {
        printf("'%s' is less than '%s'.\n", str1, str2);
    } else {
        printf("'%s' is greater than '%s'.\n", str1, str2);
    }

    return 0;
}
