#include "linkedList.h"
#include <iostream>
#include<string.h>

linkedList ::linkedList() : anfang{nullptr} {};

linkedList::linkedList(const linkedList &orig) : linkedList{}
{

    linkedList temp;
    element *zeiger=orig.anfang;
    while(zeiger!=nullptr){
        temp.append(zeiger->key);
        zeiger=zeiger->next;
    }
    
}
linkedList:: ~linkedList(){
    element *temp = anfang;
    int pos=0;
    while (temp != nullptr)
    {   remove(pos);
        pos++;
        temp = temp->next;
    }
}
void linkedList::printlist()
{
    element *temp = anfang;
    while (temp != nullptr)
    {
        std::cout << temp->key << std::endl;
        temp = temp->next;
    }
}
int linkedList::append(const char *text)
{
    element *neu = new struct element;
    if (neu != nullptr)
    {
        neu->key = text;
        neu->next = nullptr;
        if (anfang == nullptr)
        {
            anfang = neu;

            return 1;
        }
        else
        {
            element *temp = anfang;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = neu;
            return 1;
        }
    }
    return 0;
}

int linkedList::insert(const char *text, int p)
{
    element *temp = anfang;
    element *vor = nullptr;
    int pos = 0;
    element *neu = new struct element;

    if (neu != nullptr)
    {

        neu->key = text;
        if (p == 0)
        {
            element *temp = anfang;
            anfang = neu;
            neu->next = temp;

            return 1;
        }

        // temp läuft biszum p
        while (temp->next != nullptr && pos < p)
        {

            vor = temp;
            temp = temp->next;
            pos++;
        }
        if (pos == p)
        { // falls p gefunden ist wird die UrP nach rechts geschoben
            vor->next = neu;
            neu->next = temp;
            return 1;
        }
        else
        { // falls die Anzahl der elemente des listes kein als p hängt das neue element am ende
            temp->next = neu;
            neu->next = nullptr;
            return 1;
        }
    }
    return 0;
}

int linkedList::remove(int p)
{
    element *temp = anfang;
    element *vor = nullptr;
    int pos = 0;
    // loesch erste element
    if (p == 0)
    {
        anfang = temp->next;
        delete temp;
        geloEle++;
        return geloEle;
    }

    while (temp->next != nullptr && pos < p)
    {
        vor = temp;
        temp = temp->next;
        pos++;
    }
    if (pos == p && temp->next != nullptr)
    { // loesch in der Mitte
        vor->next = temp->next;
        delete temp;
        geloEle++;
    }
    else if (temp->next == nullptr && pos < p)
    { // p nicht gefunden loesch letzte
        vor->next = nullptr;
        delete temp;
        geloEle++;
    }
    return geloEle;
}
const char * linkedList:: get(int p){
    int pos=0;
    element*temp=anfang;
    while(temp->next!=nullptr && pos<p){
        temp=temp->next;
        pos++;
    }
    if(pos<p){
        return "nullptr";
    }else{
        return temp->key;
    }
}
int linkedList:: index_of(const char *text){
     element*temp=anfang;
     int pos=0;
    while(temp->next!=nullptr){
        if(strcmp((temp->key),text)==0){
            break;
        }
        temp=temp->next;
        pos++;
    }
    return pos;
}
const char * linkedList:: first(){
    return anfang->key;
}

const char * linkedList:: last(){
    element *temp=anfang;
     while (temp->next != nullptr )
        {
            temp = temp->next;
        }
        return temp->key;
}
void linkedList::  visit_all(void (*work)(const char* t)){
    element *temp=anfang;
     while (temp!= nullptr )
        {
            work(temp->key);
            temp = temp->next;
        }
}