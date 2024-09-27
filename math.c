#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a;
    printf("Zadejte délku strany: \n"); 
    scanf("%f", &a);

    float obvod = 4 * a;
    float obsah = a * a;
    if (a < 0)
    {
        printf("Obvod a obsah nemůže být v záporných čísel\n");
    }
    else
    {
        printf("Obvod čtverce je %.1f cm a obsah je %.0f cm\n", obvod, obsah);
    }
    return 0;
}