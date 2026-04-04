#include <stdio.h>

int main() {
    char str[] = "Hello World";
    int vowels = 0, consonants = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ')
            spaces++;
        else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            vowels++;
        else
            consonants++;
    }

    printf("Vowels: %d\nConsonants: %d\nSpaces: %d", vowels, consonants, spaces);
    return 0;
}