#include "Classroom.h"

#include <string>

using namespace std;

namespace planning {

    Classroom::Classroom(){
        cout<<"constructeur par defaut (filleC)"<<endl;
        setId(0);
        setName("default");
        setSeatingCapacity(0);
    }

    Classroom::Classroom(int i, const string& n, int sc): Schedulable(i) {
        cout << "constructeur d'initialisation (filleC)" << endl;
        setName(n);
        setSeatingCapacity(sc);
    }

    Classroom::Classroom(const Classroom& c): Schedulable(c) {
        cout<<"constructeur de copie (filleC)"<<endl;
        setName(c.name);
        setSeatingCapacity(c.seatingCapacity);
    }

    Classroom::~Classroom() {
        cout<<">>> destructeur (filleC) <<<"<<endl;
    }

    void Classroom::setName(const string& n) {
        name = n; 
    }
    
    void Classroom::setSeatingCapacity(int sc) {
        seatingCapacity = sc; 
    }

    string Classroom::getName() const {
        return name; 
    }
    
    int Classroom::getSeatingCapacity() const { 
        return seatingCapacity; 
    }

    string Classroom::toString() const {
        return name + " (" + to_string(seatingCapacity) + ")";
    }

    string Classroom::tuple() const {
        return to_string(id) + ";" + name + " (" + to_string(seatingCapacity) + ")";
    }

    Classroom& Classroom::operator=(const Classroom& c) {
        setId(c.getId());
        name = c.name;
        seatingCapacity = c.seatingCapacity;
        return *this;
    }

    ostream& operator<<(ostream& s, const Classroom& c) {
        s << c.toString();
        return s;
    }

}//end namespace