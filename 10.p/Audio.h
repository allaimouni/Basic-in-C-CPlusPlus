#include "Medium.h"
#include<string>
using namespace std;
class Audio :public Medium{
    private:
     string interpreter;
     int dauer;
     public:
      Audio(string title, int jahr, string interpreter, int dauer);

        int getDauer()const{
        return dauer;
    }
    
 string getInterpreter()const{
        return interpreter;
    }
    void druckeDaten();
};