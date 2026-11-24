#include "Exception.h"

#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

namespace planning {

    Exception::Exception(){
        cout<<"constructeur par defaut (mere)"<<endl;
        setMessage("erreur:jsp");
    }

    Exception::Exception(string m){
        cout << "constructeur d'initialisation (mere)" << endl;
        setMessage(m);
    }

    Exception::Exception(const Exception& e){
        cout << "constructeur de copie (mere)"<<endl;
        setMessage(e.message);
    }

    Exception::~Exception() {
        cout<<">>> destructeur (mere) <<<"<<endl;
    }

    void Exception::setMessage(string m) { 
        message = m; 
    }

    string Exception::getMessage() const {
        return message; 
    }

}//end namespace