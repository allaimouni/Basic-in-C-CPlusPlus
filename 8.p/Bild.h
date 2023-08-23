#include "Medium.h"
#include<string>
using namespace std;
class Bild :public Medium{
    private:
     string ort;
     
     public:
     Bild(string title, int jahr, string ort);

    
    
 string getOrt()const{
        return ort;
    }
    void druckeDaten();
};