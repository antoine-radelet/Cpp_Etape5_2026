#ifndef CLASSROOM_H
#define CLASSROOM_H

#include <iostream>
#include "Schedulable.h"

namespace planning {

    class Classroom : public Schedulable {
        private:
            std::string name;
            int seatingCapacity;

        public:
            Classroom();
            Classroom(int i, const std::string& n, int sc);
            Classroom(const Classroom& c);
            ~Classroom();

            void setName(const std::string& n);
            void setSeatingCapacity(int sc);
            std::string getName() const;
            int getSeatingCapacity() const;

            std::string toString() const override;
            std::string tuple() const override;

            Classroom& operator=(const Classroom& c);
            friend std::ostream& operator<<(std::ostream& s, const Classroom& c);
    };

}
#endif