#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char* text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            text[i] = (ch - base + shift) % 26 + base;
        }
    }
}

void decrypt(char* text, int shift) {
    encrypt(text, 26 - (shift % 26));
}

int main() {
    char message[1000];
    int shift;

    printf("Enter the message: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = 0;

    printf("Enter shift value: ");
    scanf("%d", &shift);

    encrypt(message, shift);
    printf("Encrypted message: %s\n", message);

    decrypt(message, shift);
    printf("Decrypted message: %s\n", message);

    return 0;
}
