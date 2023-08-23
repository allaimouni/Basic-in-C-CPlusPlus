  struct element {
   const char* key;
    element* next;
};
class linkedList{
  private:
   element *anfang=nullptr; 
    int geloEle=0;
  public:
    linkedList();
    linkedList(const linkedList &orig);
    ~linkedList();
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