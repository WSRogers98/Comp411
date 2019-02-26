
/* Example: analysis of text */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX],c, textR[MAX], textB[MAX], textBR[MAX];
  int i, j, l, m, n;
  int k = 0;
  int length, length2, length3;
 int lowercase, uppercase, digits, other;
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
/* for (i = lowercase = uppercase = digits = other = 0; i < MAX; i++)
  {
    c = text[i];
    if (c >= 'a' && c <= 'z')
      lowercase++;
    else if (c >= 'A' && c <= 'Z')
      uppercase++;
    else if (c >= '0' && c <= '9')
      digits++;
    else
    {
      if (c == '\n')
        break;
      other++;
    }
  }
  */
  fgets(text, MAX, stdin);
  length2 = strlen(text) - 1;
  length = strlen(text) - 1;
  n=0;
  
  i = 0;
  while (length >= 0) {
      textR[i] = text[length - 1];
      length--;
      i++;
  }
  
  for (l=0; l < length2; l++) {
      if (isspace(text[l])==0 && ispunct(text[l])==0) {
          textB[n] = tolower(text[l]);
          n++;
      }
  }
  textB[n] = '\0';
  length3 = n;
  
  m=0;
  while(length3 >= 0) {
      textBR[m] = textB[length3 - 1];
      length3--;
      m++;
  }
  
  textR[length2] = '\0';
   
  printf("%s", "Your input in reverse is:\n");
  printf("%s\n", textR);
  if (strcmp(textBR,textB)==0) {
      printf("Found a palindrome!\n");
  }

/*  
  puts("\nYou typed:");
  printf("A string with %d characters\n", length);
  printf("\t%d lower case letters\n", lowercase);
  printf("\t%d upper case letters\n", uppercase);
  printf("\t%d digits\n", digits);
  printf("\t%d others\n", other);
*/
}


