#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
  int i=0;
  int len = strlen(str);
  int count = 0;
  int z = 0;
  char* result;
  for (i = 0; i < len; ++i) {
    if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
    
    } else {
       count++;
    }
  }
  result = (char*) calloc(count+1, sizeof(char));
  for (i = 0; i < len; ++i) {
    if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
    
    } else {
      result[z] = str[i];
      z++;
    }
  }


  result[count] = '\0';
  return result;
}
