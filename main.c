#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (input >= 90&&input<=100)
        printf("AA");
    else if (input >= 80&&input<=89)
        printf("A");
    else if (input >= 70&&input<=79)
        printf("B");
    else if (input >=60&&input<=69)
        printf("C");
    else if (input >= 1&&input<=59)
        printf("D");
    else if (input>=101&&input==0&&input<0)
    {
        printf("NG");
    }
    
        
    return 0;
}
