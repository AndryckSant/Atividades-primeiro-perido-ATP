#include <stdio.h>

int main()
{
    double paisA= 5000000, paisB= 7000000, anos = 0;

    do
    {
        anos++;
        paisA = (paisA * 1.03);
        paisB = (paisB * 1.02);
    } while (paisA < paisB);
    printf("Serão necessários %.0f anos até que o País A com população de %.0f tenha uma quantidade de habitantes igual a do país B com %.0f habitantes", anos, paisA, paisB);
    return 0;
}