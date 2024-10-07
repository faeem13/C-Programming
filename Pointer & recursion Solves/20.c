//append new data to sample.txt
#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("sample.txt","a");
    if(file == NULL){
        printf("File not created\n");
    }
    fprintf(file, "I have took section with her and somehow its feels good without any season");
    fclose(file);
    //lets read the file
    file = fopen("sample.txt","r");
    if(file == NULL){
        printf("File not created\n");
    }
    char line[100];
    while(fgets(line, sizeof(line), file)){
        printf("%s",line);
    }
    fclose(file);
    return 0;

}