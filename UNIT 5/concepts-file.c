// A file is a collection of data stotred permanently on a storage device.
//* Steps in file handling:-
//      1.create/open file.
//      2.read/write data.
//      3.close file.

// FIle opening and closing.
#include <stdio.h>
int main(){
    FILE *fp;
    fp = fopen("sample.c","r");
    fclose(fp);

    return 0;
}