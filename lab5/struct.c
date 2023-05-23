#include <stdio.h>
#include <string.h>
#include "struct.h"

struct personalComputer // Объявление структуры
{
    char * architecture;
    int cores;
    int memory;
};

union counter // Объявление юниона
{
    int number;
    char notNumber;
};

// Объявление переменных
int array[4][4];
char names[4][4];
int counter = 1; 
char sentence[256];
int answer;
double floatingAnswer;

// Объявление функций
void createSentence();
void unitedStructuresOfSiberia();

void structs(void)
{
    unitedStructuresOfSiberia();   
    createSentence();
}

void unitedStructuresOfSiberia()
{
    // В структурах каждая переменная получает собсвенную память
    struct personalComputer IBM;
    IBM.architecture = "X86_64";
    printf("\nPC info\n  -Architecture: %s\n\n", IBM.architecture);
    IBM.cores = 2;
    IBM.memory = 4;
    printf("PC info\n  -Architecture: %s\n  -Cores: %d @ 2.000 GHz\n  -Memory: %dGB\n\n", IBM.architecture, IBM.cores, IBM.memory);
    // При объявлении оставшихся переменных значение строки не изменилось

    // В юнионе память общая между переменными
    union counter comrad; 
    comrad.number = 1;
    printf("Number of comrads: %d\n\n", comrad.number);
    comrad.notNumber = 'R';
    printf("After writing '%c',\nNumber of comrads: %d\n\n", comrad.notNumber, comrad.number);
    // При объявлении символа значение числа было утеряно (отображается код символа)
}

void createSentence() // функция собирает строку и считает базовые операции + - * /
{
    // Заполнение массива #1
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            array[i][j] = counter;
            counter++;
            //printf("[%2d] ", array[i][j]);
        }
        //printf("\n\n");
    }

    // Заполнение массива #2
    strcpy(names[0], "Bob");
    strcpy(names[1], "Dot");
    strcpy(names[2], "Bil");
    strcpy(names[3], "Kim");

    //for (int i = 0; i < 4; i++) printf("%4s", names[i]);
    //printf("\n\n");

    strcpy(sentence, "");
    strncat(sentence, names[0],4);
    strncat(sentence, " lives at first floor and have calculated sum of all apartment numbers on it, he got number ", 128);
    answer = 0;
    for (int i = 0; i < 4; i++)
    {
        answer += array[0][i];
    }
    printf("%s%d.\n",sentence, answer);

    strcpy(sentence, "");
    strncat(sentence, names[1],4);
    strncat(sentence, " lives at second floor and have calculated substraction of all apartment numbers on it from a 1000, he got number ", 128);
    answer = 1000;
    for (int i = 0; i < 4; i++)
    {
        answer -= array[1][i];
    }
    printf("%s%d.\n",sentence, answer);

    strcpy(sentence, "");
    strncat(sentence, names[2],4);
    strncat(sentence, " lives at third floor and have multiplied all apartment numbers on it, he got number ", 128);
    answer = 1;
    for (int i = 0; i < 4; i++)
    {
        answer *= array[2][i];
    }
    printf("%s%d.\n",sentence, answer);

    strcpy(sentence, "");
    strncat(sentence, names[3],4);
    strncat(sentence, " lives at fourth floor and have divided 1000 by all apartment numbers on it, he got number ", 128);
    floatingAnswer = 1000;
    for (int i = 0; i < 4; i++)
    {
        floatingAnswer /= array[3][i];
    }
    printf("%s%f\n\n",sentence, floatingAnswer);

}

/*
    Некрасивая функция есть результат моей попытки сделать "по-умному": хотел выделить паттерн предложения и подставлять нужные слова и операции с числами, да еще и числа  конвертировать в строки и на вывод подавать одну лишь переменную sentence, однако написав массивную конструкцию с switch case'ами и прочим понял что в рамках этой лабы она бесполезна и в разы длиннее обычного перечисления нужных операций, еще и читаемость хуже. Потратил я на это стыдное количество времени, но зато усвоил суть проблемы с "преждевременной оптимизацией".
*/
