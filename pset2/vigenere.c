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
    int keylen;
    string text, key, p;
    if (argc != 2) {
        printf("Usage: %s <keyword>\n", argv[0]);
        return 1;
    }
    key = argv[1];
    while (*key != '\0') {
        if (*key >= 'a' && *key <= 'z')
            *key -= 'a';
        else if (*key >= 'A' && *key <= 'Z')
            *key -= 'A';
        else {
            printf("key not alphabetical!\n");
            return 1;
        }
        key++;
    }
    keylen = key - argv[1];
    
    text = GetString();
    p = text;
    while (*p != '\0') {
        if (key - argv[1] == keylen)
            key = argv[1];
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
            *p = caesar(*p, (int)(*key++));
        p++;
    }
    printf("%s\n", text);
    return 0;
}
