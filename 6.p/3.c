#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// str1 ist ein zeiger auf char wert , die Konstatnt ist 
char *stringcat (const char* str1, const char*str2)  {
   int laenge1=strlen(str1);
   int laenge2=strlen(str2);
   char *res=(char *)malloc((laenge1+laenge2)*sizeof(char));
   strcpy(res,str1);
   strcat()
   //WICHTIG string cat erwartet 2 argumente der erste ist char* der zweite const char *  
    strcat(res,str2);
    return res;
}

int main(){
    const char * first="blabla";
    const char * second="is not good";
    char *res=stringcat(first,second);
printf("Ergebnis %s",res);
free(res);
}