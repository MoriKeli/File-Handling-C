#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    FILE * fp, *fr;

    /*The file is opened for writing*/
    fp = fopen("C:/Users/MORI/OneDrive/Documents/Coding/Console/C/Append data to a text file/text.txt", "w");
    if (fp == NULL) {
        printf("File does not exist!\n");
        exit(0);
    }
    fprintf(fp, "This is a text file"); //default text in the text file.
    fclose(fp); //the file is closed after the default text is printed in the text file.

    printf("Enter a number: ");
    scanf("%d", &num);

    /*The text file is reopened for appending*/
    fr = fopen("C:/Users/MORI/OneDrive/Documents/Coding/Console/C/Append data to a text file/text.txt", "a");
    fprintf(fr,"\n");   //creates a new line before appending text.
    fprintf(fr, "%d", num); //appended text in the text file.
    fclose(fr);


}