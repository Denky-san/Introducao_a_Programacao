#include <stdio.h>

int main(){
  char str[100];
  
  printf("Informe o conteúdo para o arquivo:\n");
  fgets(str, 100, stdin); // read from stdin
  //puts(str); // print read content out to stdout
  
  // open the file
  FILE *file = fopen("file.txt" , "w"); 
  
  // if there was an error
  if(file == NULL){
    perror("Error opening file"); // print error
    return(-1); 
  }
  // if there was no error
  else{ 
    //usando fprintf para armazenar a string no arquivo
    fprintf(file, "%s", str);
    fclose(file); // close file
    
  }
  
  //abre o arquivo para a leitura
  file = fopen("file.txt" , "r"); 
  
  // if there was an error
  if(file == NULL){
    perror("Error opening file"); // print error
    return(-1); 
  }
  // if there was no error
  else{ 
    fgets(str, 100, file); // read from file
    printf("Conteúdo lido do arquivo: \n");
    puts(str); // print read content out to stdout
    fclose(file); // close file
  }

  return(0);
}