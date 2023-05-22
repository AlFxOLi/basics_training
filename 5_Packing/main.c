#include <stdio.h>
//#pragma pack(1) //Упаковывает переменные вплотную, без промежутков
struct types1
{
    char letter;
    int number;
    short week;
    long value;
};

struct types2
{
    char letter;
    short week;
    int number;
    long value;
};

struct types3
{
    long value;
    int number;
    short week;
    char letter;
};


int main (void)
{
    struct types1 example1;
    example1.letter = 'L';
    example1.number = 256;
    example1.week = 2;
    example1.value = 987654321;
    printf("%p\n", &example1);
    printf("%d\n", sizeof(example1)); //24 байта, 2 промежутка 
    printf("%p\n", &example1.letter);
    printf("%d\n", sizeof(example1.letter));
    printf("%p\n", &example1.number);
    printf("%d\n", sizeof(example1.number));
    printf("%p\n", &example1.week);
    printf("%d\n", sizeof(example1.week));
    printf("%p\n", &example1.value);
    printf("%d\n\n", sizeof(example1.value));

    struct types2 example2;
    example2.letter = 'L';
    example2.week = 2;
    example2.number = 256;
    example2.value = 987654321;
    printf("%p\n", &example2);
    printf("%d\n", sizeof(example2)); // 16 байтов, 1 промежуток
    printf("%p\n", &example2.letter);
    printf("%d\n", sizeof(example2.letter));
    printf("%p\n", &example2.week);
    printf("%d\n", sizeof(example2.week));
    printf("%p\n", &example2.number);
    printf("%d\n", sizeof(example2.number));
    printf("%p\n", &example2.value);
    printf("%d\n\n", sizeof(example1.value));

    struct types3 example3;
    example3.value = 987654321;
    example2.number = 256;
    example2.week = 2;
    example3.letter = 'L';
    printf("%p\n", &example3);
    printf("%d\n", sizeof(example3)); // 16 байтов, 1 промежуток
    printf("%p\n", &example3.value);
    printf("%d\n", sizeof(example3.value));
    printf("%p\n", &example3.number);
    printf("%d\n", sizeof(example3.number));
    printf("%p\n", &example3.week);
    printf("%d\n", sizeof(example3.week));
    printf("%p\n", &example3.letter);
    printf("%d\n", sizeof(example3.letter));

    return 0;
}
/*
по-умолчанию компилятор может создавать "промежутки" между переменными в памяти, для контроля процесса упаковки применяется #pragma pack(),
например #pragma pack(1) указывает компилятору упаковывать побайтово, без каких-либо промежутков.
Если верить статье Реймонда Чена на тему, то если упаковывать побайтово, то системы с RISC архитектурой будут страдать.
*/
