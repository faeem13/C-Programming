//wrap that will count the number lines of a file
#include<stdio.h> 
#include<stdlib.h>
int main(){
 FILE *file;
 file = fopen("sample.txt","r");
 if(file == NULL){
    printf("File not created\n");
 }
 else 
 printf("File created\n");
 int count = 0;
 char line[100];
    while(fgets(line, sizeof(line), file)){
        if (line[0] != '\n')
        {
            count++;
        }
        
    }
    fclose(file);
    printf("The number of lines in the file is %d\n",count);
}