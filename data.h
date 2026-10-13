#ifndef DATA_H
#define DATA_H

typedef struct
{
    int dia;
    int mes;
    int ano;
} Data;

Data *CriaData(int dia, int mes, int ano);
Data *leData();

#endif