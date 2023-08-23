#ifndef MEDIUM_H_ 
#define MEDIUM_H_ 

#include <string>
using namespace std;
class Medium{
    private:
    static int x;
   const int id=x;
   
    string title;
    int jahr;
    public:
    Medium(string title, int jahr);
    int getJahr()const{
        return jahr;
    }
    int getId()const{
        return id;
    }
    
 string getTitle()const{
        return title;
    }
    int alter();
    virtual void druckeDaten()=0;
};
#endif