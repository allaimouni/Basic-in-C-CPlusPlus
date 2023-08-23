#include <stdio.h>
#define MAX 2
typedef enum status
{
    leer,
    besitzt,
    geloescht
} status;
struct element
{
    status status;
    int key;
};
struct element array[MAX];
int hashfunction(int a)
{
    return a % MAX;
}
int insert(int a)
{
    int erg = 0;
    int index = hashfunction(a);
    if (array[index].key == 0 && (array[index].status == 0 || array[index].status == 2 ))
    {
        array[index].key = a;
        array[index].status = 1;
        erg = 1;
    }
    else
    {

        for (int i = 0; i < MAX; i++)
        {
            if (array[i].key == 0  && (array[i].status == 0 || array[i].status == 2 ))
            {
                array[i].key = a;
                array[i].status = 1;
                erg = 1;
            }
        }
    }
    return erg;
}
int suche(int a)
{
    if (array[hashfunction(a)].key == a && array[hashfunction(a)].status == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 0; i < MAX; i++)
        {
            if (array[i].key == a && array[i].status == 1)
            {
                return 1;
            }
        }
    }
}

int delete(int a)
{
    int index = hashfunction(a);
    if (array[index].key == a && array[index].status == 1)
    {
        array[index].key = 0;
        array[index].status = 2;
        return 1;
    }
    else
    {
        for (int i = 0; i < MAX; i++)
        {
            if (array[i].key == a && array[i].status == 1)
            {
                array[i].key = 0;
                array[i].status = 2;
                return 1;
            }
        }
    }
}
int member(int a){
     int index = hashfunction(a);
    if (array[index].key == a && array[index].status == 1)
    {
        
        return 1;
    }else{
     for (int i = 0; i < MAX; i++)
        {
            if (array[i].key == a && array[i].status == 1)
            {
                
                return 1;
            }
        }
    }
}
int main(){
    printf("%d\n", insert(1));
    printf("array %d",array[0].key);
printf("%d\n",array[1].key);
printf("%d\n", insert(3));
printf("array %d",array[0].key);
printf("%d\n",array[1].key);
printf("%d\n", delete(3));
printf("array %d",array[0].key);
printf("%d\n",array[1].key);
printf("%d\n", insert(5));

printf("array %d",array[0].key);
printf("%d\n",array[1].key);
printf("%d\n", member(5));
}
