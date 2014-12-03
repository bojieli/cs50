#include<stdio.h>
#include<cs50.h>

int main() {
    float total;
    int cent;
    int coins = 0;
    printf("O hai!  ");
    while (true) {
        printf("How much change is owed?\n");
        total = GetFloat();
        if (total >= 0)
            break;
    }
    cent = (int)(total * 100);
    printf("%d\n", cent);
   // if (total * 100 - cent > 0.5)
   //     cent++;
    
    coins += (cent / 25);
    cent %= 25;

    coins += (cent / 10);
    cent %= 10;

    coins += (cent / 5);
    cent %= 5;

    coins += cent;

    printf("%d\n", coins);
}
