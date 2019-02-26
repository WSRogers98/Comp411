/* Example: analysis of text */

#include <stdio.h>
#include <string.h>

#define MAX 1000 /* The maximum number of characters in a line of input */

int main()
{
  char text[MAX], c;
  int i=0;
 int k;
  int lowercase, uppercase, digits, other;
  int length;
char textR[MAX], a;
  
  puts("Type some text (then ENTER):");
  
  /* Save typed characters in text[]: */
   fgets(text, MAX, stdin);
   length= strlen(text)-1; 
  
  /* Analyse contents of text[]: */
   /* 
  for (i = lowercase = uppercase = digits = other = 0; i < MAX; i++)
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
  k =length;
while (k >= 0) {
      textR[i] = text[k - 1];
      k--;
      i++;
  }
text[length] ='\0';
printf("%s", "Your input in reverse is:\n");
printf("%s\n", textR);
if(strcmp(textR,text)==0) {
printf("Found a palindrome!\n");
}
/*  puts("\nYou typed:");
  printf("A string with %d characters\n", length);
  printf("\t%d lower case letters\n", lowercase);
  printf("\t%d upper case letters\n", uppercase);
  printf("\t%d digits\n", digits);
  printf("\t%d others\n", other);
*/
}
