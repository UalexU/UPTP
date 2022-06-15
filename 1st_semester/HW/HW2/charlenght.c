#include <ctype.h>

int main(void)
{
    char character;
    int count = 0;
    printf("message: ");
    character = getchar();
    while (character != '\n')
    {
        character = getchar();
        if (character != ' ')
        {
            count += 1;
        }
    }
    printf("output: %d", count);
    return 0;
}
