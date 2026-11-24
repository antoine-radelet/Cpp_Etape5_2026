#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <iostream>
#include "Schedulable.h"

namespace planning {

    class Professor : public Schedulable {
        private:

            std::string lastName;

            std::string firstName;

        public:

            Professor();

            Professor(int i, const std::string& ln, const std::string& fn);

            Professor(const Professor& p);

            ~Professor();

            void setLastName(const std::string& ln);
            void setFirstName(const std::string& fn);
            std::string getLastName() const;
            std::string getFirstName() const;

            std::string toString() const override;
            std::string tuple() const override;

            Professor& operator=(const Professor& p);
            friend std::ostream& operator<<(std::ostream& s, const Professor& p);
    };

}
#endif