#include "Professor.h"

#include <string>
using namespace std;

namespace planning {

    Professor::Professor(){
        cout<<"constructeur par defaut (filleP)"<<endl;
        setId(0);
        setLastName("default");
        setFirstName("default");
    }

    Professor::Professor(int i, const string& ln, const string& fn):Schedulable(i){
        cout << "constructeur d'initialisation (filleP)" << endl;
        setLastName(ln);
        setFirstName(fn);
    }

    Professor::Professor(const Professor& p):Schedulable(p){
        cout<<"constructeur de copie (filleP)"<<endl;
        setLastName(p.lastName);
        setFirstName(p.firstName);
    }

    Professor::~Professor() {
        cout<<">>> destructeur (filleP) <<<"<<endl;
    }

    void Professor::setLastName(const string& ln) { 
        lastName = ln; 
    }

    void Professor::setFirstName(const string& fn) { 
        firstName = fn; 
    }

    string Professor::getLastName() const { 
        return lastName; 
    }
    
    string Professor::getFirstName() const { 
        return firstName; 
    }

    string Professor::toString() const {
        return lastName + " " + firstName;
    }

    string Professor::tuple() const {
        return to_string(id) + ";" + lastName + ";" + firstName;
    }

    Professor& Professor::operator=(const Professor& p) {
        setId(p.getId());
        lastName = p.lastName;
        firstName = p.firstName;
        return *this;
    }

    ostream& operator<<(ostream& s, const Professor& p) {
        s << p.toString();
        return s;
    }

}//end namespace