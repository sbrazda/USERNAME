#include <cs50.h>
#include <stdio.h>

float average(int length, int array[]);

int main (void)
{
    int n = get_int("scores: ");
    int scores [n];
    for (int n = 0; i < n; i++)
    {
        scores[i] = get_int("scores %i: ", i + 1);
    }
        printf("Average: %.1f\n", average(n, scores));
}

float average(int length, int array)
{
    int sum = 0
    for (int i=0, i < length, i++) {
        numbers[i] = get_int("Enter a number: ");   
    }
}

int count; 

for(int i = 0; i < lenth; i++) {
    count = 1;
    for(int j = i+1; j < length; j++) {
        if(numbers [j]) == numbers[i]) {
            count++
        }
    }
}
