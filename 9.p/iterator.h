#ifndef ITERATOR_H
#define ITERATOR_H
class Iterator{
    private:

    public :
    
    virtual bool hasNext()=0;
    virtual const char* next()=0; 
    virtual ~Iterator() {}
};
#endif