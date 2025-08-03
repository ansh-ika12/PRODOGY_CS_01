#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter your password: ");
    scanf("%s", password);

    int length = strlen(password);

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;
    }

    printf("\nPassword Analysis:\n");
    printf(" Minimum length met: %s\n", length >= 8 ? "Yes" : "No");
    printf(" Contains uppercase letter: %s\n", hasUpper ? "Yes" : "No");
    printf(" Contains lowercase letter: %s\n", hasLower ? "Yes" : "No");
    printf(" Contains digit: %s\n", hasDigit ? "Yes" : "No");
    printf(" Contains special character: %s\n", hasSpecial ? "Yes" : "No");

    // Password strength
    int strength = hasUpper + hasLower + hasDigit + hasSpecial + (length >= 8);

    printf("\nPassword Strength: ");
    if (strength >= 5) {
        printf("Strong\n");
    } else if (strength >= 3) {
        printf("Moderate\n");
    } else {
        printf("Weak\n");
    }

    return 0;
}

