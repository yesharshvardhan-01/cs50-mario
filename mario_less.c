#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Please enter a positive integer between 1 and 8 as height: ");
    }
    while (height < 1 || height > 8);

    for (int n = 0; n < height; n++)
    {
        for (int i = 0; i < height - n - 1; i++)
        {
            printf(" ");
        }
        for (int k = 0; k < n + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
