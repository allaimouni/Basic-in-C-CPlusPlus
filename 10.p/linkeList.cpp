#include "linkedList.h"
#include <iostream>
#include<string.h>
#include"iterator.h"



template <class T>
linkedList<T>::ListIterator::ListIterator(element<T>* start) : temp{start} {}
template <class T> bool linkedList<T>:: ListIterator ::hasNext(){
    
    return temp != nullptr;
}

 template<class T> T linkedList<T>:: ListIterator ::next(){
    T key=temp->key;
    temp=temp->next;
    return key;
}
 template<class T>   Iterator<T>* linkedList<T>:: iterator(){
   class linkedList<T>:: Iterator * i= new class linkedList<T>::ListIterator(anfang);

    return i;
}

template<class T>  linkedList<T> ::linkedList() : anfang{nullptr} {};

template<class T> linkedList<T>::linkedList(const linkedList &orig) : linkedList{}
{

    
    element<T> *zeiger=orig.anfang;
    while(zeiger!=nullptr){
        append(zeiger->key);
        zeiger=zeiger->next;
    }
    
}

template<class T> linkedList<T>:: ~linkedList(){
    element<T> *temp = anfang;
    int pos=0;
    while (temp != nullptr)
    {   remove(pos);
        pos++;
        temp = temp->next;
    }
}
template<class T> void linkedList<T>::printlist()
{
    element<T> *temp = anfang;
    while (temp != nullptr)
    {
        std::cout << temp->key << std::endl;
        temp = temp->next;
    }

}

template<class T> int linkedList<T>::append(T text)
{
    element<T> *neu = new struct element<T>;
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
            element<T> *temp = anfang;
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

template<class T> int linkedList<T>::insert(T text, int p)
{
    element<T> *temp = anfang;
    element<T> *vor = nullptr;
    int pos = 0;
    element<T> *neu = new struct element<T>;

    if (neu != nullptr)
    {

        neu->key = text;
        if (p == 0)
        {
            element<T> *temp = anfang;
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

template<class T> int linkedList<T>::remove(int p)
{
    element<T> *temp = anfang;
    element<T> *vor = nullptr;
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
template<class T> T linkedList<T>:: get(int p){
    int pos=0;
    element<T>*temp=anfang;
    while(temp->next!=nullptr && pos<p){
        temp=temp->next;
        pos++;
    }
    if(pos<p){
        return T();;
    }else{
        return temp->key;
    }
}

template<class T> void linkedList<T>::  visit_all(void (*work)(T t)){
   /* element *temp=anfang;
     while (temp!= nullptr )
        {
            work(temp->key);
            temp = temp->next;
        }
        */
        Iterator<T> *temp=iterator();
        while(temp->hasNext()){
          
          T text = temp->next();
        work(text);
        }
       delete temp; 
}