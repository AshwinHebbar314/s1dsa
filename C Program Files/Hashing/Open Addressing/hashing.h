#define SIZE 1000
#define NAMELENGTH 40
#define JOBCODELENGTH 10

typedef int KEY;

typedef struct item {
    KEY employeeNumber;
    char employeeName[NAMELENGTH];
    char jobCode[JOBCODELENGTH];
} ITEM;

int hash(KEY);
bool hashing_open_addressing(ITEM [], KEY, int);
