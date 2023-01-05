#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 100

int main()
{
    FILE *fp;
    char filename[] = "Task3words.txt";
    char longest_word[MAX_WORD_LEN + 1];
    char word[MAX_WORD_LEN + 1];
    int word_len;
    int longest_word_len = 0;

    // Відкриваємо файл для читання
    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Can't open your file. Please make sure your file named right! Filename: %s\n", filename);
        return 1;
    }

    // Читаємо слова з файлу і робимо з них різні операції
    while (fscanf(fp, "%s", word) == 1)
    {
        word_len = strlen(word);
        if (word_len > longest_word_len)
        {
            strcpy(longest_word, word);
            longest_word_len = word_len;
        }
    }

    // Закриваємо файл
    fclose(fp);

    // Виводимо найдовше слово на екран
    printf("The longest word: %s\n", longest_word);

    return 0;
}
