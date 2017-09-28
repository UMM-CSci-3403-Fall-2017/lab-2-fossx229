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
  //loops over the array  to find non-vowels and keeps track of the amount
  for (i = 0; i < len; ++i) {
    if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
    
    } else {
       count++;
    }
  }
  //grabs memory for the result based on the amount of vowels
  result = (char*) calloc(count+1, sizeof(char));
  //copies over non-vowels from the old array to the new one.
  for (i = 0; i < len; ++i) {
    if(str[i] == 'a' || str[i] == 'e' || str[i]=='i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
    
    } else {
      result[z] = str[i];
      z++;
    }
  }

//Adding the null terminator at the end
  result[count] = '\0';
  return result;
}
