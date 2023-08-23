#include <stdio.h>
#include <stdlib.h>
#define MAX 2
typedef enum status
{
    leer,
    besitzt,
    geloescht
} status;

struct element
{
    struct element *next;
    int key;
};
typedef struct element element;

element *array[MAX];
int hashfunction(int a)
{
    return a % MAX;
}
void print()
{
    int i = 0;
    while (i < MAX)
    {

        struct element *pointer;
        if (array[i] == NULL)
        {
            return;
        }
        else
        {
            printf("arry[%d]\n", i);
            pointer = array[i];
            while (pointer != NULL)
            {

                printf("%d\n", pointer->key);

                pointer = pointer->next;
            }
        }
        i++;
    }
}
int insert(int a)
{

    int erg = 0;
    int index = hashfunction(a);
    element *neu = (element *)malloc(sizeof(element));
    if (neu != NULL)
    {
        neu->key = a;
        neu->next = array[index];
        array[index] = neu;
        erg = 1;
    }
    return erg;
}
int delete(int a)
{
    int index = hashfunction(a);
    element *temp = array[index];
    element *vorgang = NULL;

    while (temp)
    {

        if (temp->key == a)
        {
            if (vorgang != NULL)
            {
                vorgang->next = temp->next;
                free(temp);
            }
            else
            {

                array[index] = temp->next;
                free(temp);
            }

            return 1;
        }
        vorgang = temp;
        temp = temp->next;
    }
    return 0;
}

// int suche(int a)
/*{
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
}*/

int member(int a)
{
    int erg = 0;
    int index = hashfunction(a);
    element *temp = array[index];
    if (array[index]->key == a)
    {

        return erg = 1;
    }
    else
    {
        int i = 0;
        while (temp)
        {

            if (temp->key == a)
            {
                return 1;
            }
            temp = temp->next;
        }
    }
    printf("nichtgefunden");
    return erg;
}
int main()
{

    int i;
    for (i = 1; i <= 2 * MAX; i++)
    {
        printf("%d \n", insert(i));
    }
    print();
    for (i = 1; i <= MAX; i++)
    {
        printf(" %d  \n", member(i));
    }

    for (i = MAX + 1; i <= 2 * MAX; i++)
    {
        printf("  %d   \n", delete (i));
    }
    print();
    for (i = 1; i <= 2 * MAX; i++)
    {
        printf("     %d\n", member(i));
    }
}
