#ifndef FORCABRUTA_H
#define FORCABRUTA_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void forcaBruta(char *dic, char *pad, int m, int n);

void *thread_forcaBruta(void *arg);

#endif // FORCABRUTA_H
