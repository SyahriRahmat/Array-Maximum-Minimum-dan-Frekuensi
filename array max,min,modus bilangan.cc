#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main ()
{
    int array[7]={0};
    int a,b,c,x,max=array[0],min,modus;
    for (a=0; a<7; a++)
    {
        printf("Masukkan Angka Ke-%d = ", a+1); scanf("%d", &x);
        array[a]=x;
        if (array==0)
            min=array[a];
        if (array[a] > max)
            max=array[a];
        if (array[a] < min)
            min=array[a];
    }
    for (b=0; b<7; b++)
    {
        for (c=0; c<7; c++)
        {
            if (array[c]==array[c-1])
            {
                modus=array[c];
            }
        }
    }
    printf("Nilai Angka Maximum Adalah = %d\n", max);
    printf("Nilai Angka Minimum Adalah = %d\n", min);
    printf("Frekuensi Angka Sering Muncul = %d", modus);
    getch();
    return 0;
}
