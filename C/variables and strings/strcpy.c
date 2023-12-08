/* String handling */

#include <stdio.h>
#include <string.h>

int main() {
  char str1[20] = "C programming"; // [20] = allowed char
  char dest1[20];

  // copying str1 to dest1
  strcpy(dest1, str1);

  puts(dest1); // C programming

  return 0;
}