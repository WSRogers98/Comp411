#include <stdio.h>
#include <string.h>
#define NUM 25 
#define LEN 1000  
int my_compare_strings(char string1[], char string2[]) {
if(strlen(string1)>=strlen(string2)){
for(int i =0; string1[i] != '\0';i++){
if(string1[i]>string2[i]){
return 1;
}
if(string1[i]<string2[i]){
return 0;
}
}
}
if(strlen(string1)<strlen(string2)){
for(int i =0; string2[i] != '\0';i++){
if(string1[i]>string2[i]){
return 1;
}
if(string1[i]<string2[i]){
return 0;
}
}
}

}

void my_swap_strings(char string1[], char string2[]) {
  char temp;
for(int i =0; i<LEN;i++){
temp =string1[i];
string1[i]=string2[i];
string2[i]=temp;
}


}

int main()
{
 char Strings[NUM][LEN];
char temp[LEN];
printf("Please enter %d strings, one per line:\n", NUM);
for (int i = 0; i < NUM; i++) {
fgets(Strings[i], LEN, stdin);
}
//shoutout to the TA who tought me pointers
puts("\nHere are the strings in the order you entered:");
for (int i = 0; i < NUM; i++) {
char *p = Strings[i];
while (*p != '\0') {
printf("%c", *p++);
}
}
for(int i= NUM-1; i>0; i--){
for(int j=0; j<i; j++){
if(my_compare_strings(Strings[j], Strings[j+1])==1){
my_swap_strings(Strings[j], Strings[j+1]);
}
}
}
puts("\nIn alphabetical order, the strings are:");  
for (int i = 0; i < NUM; i++) {
 char *p = Strings[i];
 while (*p != '\0') {
 printf("%c", *p++);
        }
    }
}


