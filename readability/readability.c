#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int number_of_letters(char sentences[]);
int number_of_sentence(char sentencis[]);
int number_of_words(char word[]);

int main(void)
{

    char sentence[1000];
    printf("sentence:");
    fgets(sentence, sizeof(sentence), stdin);

    float letters = number_of_letters(sentence);
    float wordss = number_of_words(sentence);
    float sentencess = number_of_sentence(sentence);
    printf("letters : %f \n", letters);
    printf("words %f\n ", wordss);
    printf("sentences : %f\n", sentencess);
    float l = (letters / wordss) * 100;
    printf("%f\n", l);
    float s = (sentencess / wordss) * 100;
    printf("%f\n", s);

    float index = (0.0588 * l) - (0.296 * s) - 15.8;
    printf("index %f\n", index);
    int grade = (int) round(index);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
}

int number_of_letters(char sentences[])
{
    int i = 0, len = strlen(sentences), letter = 0;
    while (i < len)
    {
        if (isalpha(sentences[i]))
        {
            letter += 1;
        }

        i++;
    }
    return letter;
}

int number_of_words(char word[])
{
    bool in_word = false;
    int x = 0, len = strlen(word), words = 0;
    while (x < len)
    {

        if (!isspace(word[x]))
        {
            if (in_word == false)
            {
                words++;
            }

            in_word = true;
        }

        else
        {
            in_word = false;
        }

        x++;
    }
    return words;
}

int number_of_sentence(char sentencis[])
{
    int y = 0, len = strlen(sentencis), s = 0;
    while (y < len)
    {
        if (sentencis[y] == '.' || sentencis[y] == '!' || sentencis[y] == '?')
        {
            s++;
        }

        y++;
    }

    return s;
}
