#include<stdio.h>
#include<cs50.h>

int main() {
    int height;
    int i, j;
    while (true) {
        printf("Height: ");
        height = GetInt();
        if (height >= 0 && height <= 23)
            break;
    }
    for (i=0; i<height; i++) {
        for (j=0; j<height-i-1; j++)
            printf(" ");
        for (j=0; j<i+2; j++)
            printf("#");
        printf("\n");
    }
}
