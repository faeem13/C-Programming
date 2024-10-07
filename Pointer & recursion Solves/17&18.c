//WAP that will create and store the following information in the sample.txt text file.
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *newfile;
    newfile = fopen("sample.txt", "w");
    if(newfile == NULL){
        printf("File not created\n");
        exit(1);
    }
    fprintf(newfile, "Faeem\n");
    fprintf(newfile,"sadia\n");
    fprintf(newfile, "Who knows what the future holds\n");
    fclose(newfile);
    //now it will read the file which was created
    newfile = fopen("sample.txt", "r");
    if(newfile == NULL){
        printf("File not created\n");
        exit(1);
    }
    char line[100];
    while (fgets(line, sizeof(line), newfile))
    {
        printf("%s",line);
    }
    fclose(newfile);
    return 0;
    
    
    
    

}