# c-con-vstudio

[オンライン C言語](https://replit.com/)

```c
#define _CRT_SECURE_NO_WARNINGS

#include <windows.h>
#include <stdio.h>
#include <stdbool.h>

struct BinaryData {
    float item1;
    char item2[10];
    int item3;
    bool item4;
};

int main(void)
{
    FILE *fp = NULL;
    struct BinaryData bd;

    memset(&bd, 0x00, sizeof(bd));

    bd.item1 = 1.25;
    strcpy(bd.item2, "c:\\Temp");
    bd.item3 = 10;
    bd.item4 = true;

    fp = fopen("bd.dat", "wb");

    fwrite(&bd, sizeof(bd), 1, fp);

    fclose(fp);

    return 0;

}
```
