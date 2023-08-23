 #ifndef LINKEDLIST_H
#define LINKEDLIST_H

 #include"iterator.h"
  struct element {
   const char* key;
    element* next;
};
class linkedList{
  private:
 
    int geloEle=0;
  public:
    element *anfang=nullptr; 
    linkedList();
    linkedList(const linkedList &orig);
    ~linkedList();
   Iterator* iterator();
    class ListIterator : public Iterator{
     private:
     element *temp;
      public:
      ListIterator(element* start);
       bool hasNext();
     const char* next(); 
    };
    void printlist();
    int append(const char* text);
    int insert(const char* text, int p);
    int remove(int p);
    const char *get(int p);
    int index_of(const char *text);
    const char *first();
    const char *last();
    void visit_all(void (*work)(const char* t));
    
};
#endif