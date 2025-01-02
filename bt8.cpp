#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";
    int length = strlen(str);  
    for (int i = 0; i < length; i++) {
        if (i == 0 || str[i - 1] == ' ') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }
    printf("%s\n", str);
    return 0;
}

