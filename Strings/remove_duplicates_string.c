#include <stdio.h>

int main() {
    char str[] = "programming";
    int visited[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        if (!visited[str[i]]) {
            printf("%c", str[i]);
            visited[str[i]] = 1;
        }
    }

    return 0;
}