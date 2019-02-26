#include <stdio.h>
#include <string.h>
#define NUM 25 
#define LEN 1000

int my_compare_strings(char string1[], char string2[]) {
}

void my_swap_strings(char string1[], char string2[]) {
 char temp; 
}

int main()
{
  char Strings[NUM][LEN], temp[LEN];

  printf("Please enter %d strings, one per line:\n", NUM);
for (int i = 0; i < NUM; i++) {
        fgets(Strings[i], LEN, stdin);
    }
puts("\nHere are the strings in the order you entered:");
for (int i = 0; i < NUM; i++) {
     char *b=  Strings[i];
       while (*b != '\0') {
    printf("%c", *b++);
 }
 }
for (int i = NUM - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (strcmp(Strings[j], Strings[j + 1]) > 0){  
    strcpy(temp, Strings[j]);
         strcpy(Strings[j], Strings[j + 1]);
          strcpy(Strings[j + 1], temp);
                
   }
   }
}

puts("\nIn alphabetical order, the strings are:");   
 for (int i = 0; i < NUM; i++) {
 char *c= Strings[i];
 while (*c != '\0') {
 printf("%c", *c++);
  }
 }
}


