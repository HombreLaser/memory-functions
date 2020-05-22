#include <stdio.h>
#include <stdbool.h>

_Bool memcheck(char *string){
  if(string == NULL)
    return false;
  else
    return true;
}

char *alloc(size_t buffer){
  return (char *) malloc(buffer * sizeof(char));
}

/*Example using getline()*/

int main(int argv, char *argc[]){
  size_t buffer_size;
  char *s;

  s = alloc(buffer_size);

  if(!memcheck(s))
  {
    perror("Out of memory!\n"); //Error message.
    exit(1);
  }

  getline(&s, &buffer_size, stdin);
  //Use of the getline function
  /*s = string
   *buffer_size = a pointer to the buffer
   *stdin = stream, can be a file.*/
}
