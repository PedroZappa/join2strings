#include <stdio.h>

int main() {
  // Declare two strings to be concatenated
  char s1[] = "C Programming ", s2[] = "for Zedro!";
  // Declare a new string to store the concatenated string
  char s3[100];
  int i = 0, j = 0;
    
  // Insert the first string into the new string
  while (s1[i] != '\0') {
      s3[j] = s1[i];
      i++;
      j++;
  }
  // Insert the second string into the new string
  i = 0; // Reset i
  while (s2[i] != '\0') {
      s3[j] = s2[i];
      i++;
      j++;
  }
  // Terminate the new string with a null character
  s3[j] = '\0';
  
  // Print the concatenated string
  printf("Concatenated string: %s", s3);

  return 0;
}