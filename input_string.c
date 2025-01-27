#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && i < n - 1) {  // Corrected: proper assignment and condition
	    //here is the mistake
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  // Null-terminate the string
    return i;  
}

int main() {
    char str[100];
    int n;
    n = input(str, 100);
    printf("%s", str);  // Print the entered string
}
