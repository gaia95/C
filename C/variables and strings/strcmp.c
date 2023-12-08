/* String handling - strcmp() compares 2 strings char by char*/

#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "rie", str2[] = "Rie", str3[] = "RiE";
  int result;

  // comparing str1 and str2
  result = strcmp(str1, str2);
  printf("strcmp(str1, str2) = %d \n", result); 

  // comparing str1 and str3
  result = strcmp(str1, str3);
  printf("strcmp(str1, str3) = %d \n", result);

  return 0;
}