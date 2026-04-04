#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    int freq[256] = {0};

    for (int i = 0; str1[i] != '\0'; i++)
        freq[str1[i]]++;

    for (int i = 0; str2[i] != '\0'; i++)
        freq[str2[i]]--;

    int flag = 1;

    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}