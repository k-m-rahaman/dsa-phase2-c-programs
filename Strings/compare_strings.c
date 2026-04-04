#include <stdio.h>

int main() {
    char str1[] = "hello";
    char str2[] = "hello";
    int i = 0, flag = 1;

    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}