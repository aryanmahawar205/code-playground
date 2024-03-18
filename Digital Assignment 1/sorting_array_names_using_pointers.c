//this code will accept a an array of names (strings) and sort the same in alphabetical order
//the sorting algorithm implemented here is selection sort
//the sorting is done with the help of pointers throughout

#include <stdio.h>
#include <string.h>

int main()
{
    char strings[10][100] = {"demonstration", "apple", "joyful", "friends", "battle", "incredible", "example", "great", "happy", "city"};

    int length = 10;

    char temp[100];

    for (int i = 0; i < (length -1); i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (strcmp(strings[j], strings[min]) < 0)
            {
                min = j;
            }
        }

        if (min != i)
        {
            strcpy(temp, strings[i]);
            strcpy(strings[i], strings[min]);
            strcpy(strings[min], temp);
        }
    }

    for (int i = 0; i < length; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}