#include <stdio.h>
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int  u32;
typedef struct
{
    u16 x;
    u32  y;
    u16 z;
    u32 k;
}mystruct;
int main()
{
    printf("%d",sizeof(mystruct));

    return 0;
}
