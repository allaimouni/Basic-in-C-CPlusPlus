#ifndef ITERATOR_H
#define ITERATOR_H
template <class T> class Iterator{
    private:

    public :
    
    virtual bool hasNext()=0;
    virtual T next()=0; 
    virtual ~Iterator() {}
};
#endif