#include<stdio.h>
#include<string.h>
#include "cs50.h"

char caesar(char input, int k) {
    if (input >= 'a' && input <= 'z')
        return 'a' + (input - 'a' + k) % 26;
    else if (input >= 'A' && input <= 'Z')
        return 'A' + (input - 'A' + k) % 26;
    else
        return input;
}

int main(int argc, string argv[])
{
    int k, i;
    string str, p;
    if (argc != 2) {
        printf("Usage: %s <p>\n", argv[0]);
        return 1;
    }
    k = atoi(argv[1]);
    str = GetString();
    p = str;
    while (*p != '\0') {
        *p = caesar(*p, k);
        p++;
    }
    printf("%s\n", str);
    return 0;
}
