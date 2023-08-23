#include <stdio.h>

int hashfunction(int a);
int insert(int a);
int suche(int a);
int delete(int a);
int member(int a);

int main(){
    printf("%d\n", insert(1));
printf("%d\n", insert(3));
printf("%d\n", delete(3));
printf("%d\n", insert(5));
printf("%d\n", member(5));

}