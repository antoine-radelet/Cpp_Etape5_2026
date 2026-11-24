#include "TimeException.h"

#include <string>
using namespace std;

namespace planning {

    TimeException::TimeException():Exception(){
        cout<<"constructeur par defaut (filleT)"<<endl;
        setCode(0);
    }

    TimeException::TimeException(int i, const string& n) : Exception(n){
        cout << "constructeur d'initialisation (filleT)" << endl;
        setName(n);
    }

    TimeException::TimeException(Exception c) : Exception(g){
        cout<<"constructeur de copie (filleT)"<<endl;
        setCode(c.name);
    }

    TimeException::~TimeException() {
        cout<<">>> destructeur (filleT) <<<"<<endl;
    }

    void TimeException::setCode(int c) {
        code = c; 
    }

    string TimeException::getCode() const {
        return code; 
    }
