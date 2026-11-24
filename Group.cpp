#include "Group.h"

#include <string>
using namespace std;

namespace planning {

    Group::Group(){
        cout<<"constructeur par defaut (filleG)"<<endl;
        setId(0);
        setName("default");
    }

    Group::Group(int i, const string& n) : Schedulable(i), name(n) {
        cout << "constructeur d'initialisation (filleG)" << endl;
        setName(n);
    }

    Group::Group(const Group& g) : Schedulable(g){
        cout<<"constructeur de copie (filleG)"<<endl;
        setName(g.name);
    }

    Group::~Group() {
        cout<<">>> destructeur (filleG) <<<"<<endl;
    }

    void Group::setName(const string& n) {
        name = n; 
    }

    string Group::getName() const {
        return name; 
    }

    string Group::toString() const {
        return name;
    }

    string Group::tuple() const {
        return to_string(id) + ";" + name;
    }

    Group& Group::operator=(const Group& g) {
        setId(g.getId());
        name = g.name;
        return *this;
    }

    ostream& operator<<(ostream& s, const Group& g) {
        s << g.toString();
        return s;
    }

}//end namespace