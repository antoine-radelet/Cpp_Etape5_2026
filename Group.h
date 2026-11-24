#ifndef GROUP_H
#define GROUP_H

#include <iostream>

#include "Schedulable.h"

namespace planning {

    class Group : public Schedulable {
        private:
            std::string name;

        public:
            Group();
            Group(int i, const std::string& n);
            Group(const Group& g);
            ~Group();

            void setName(const std::string& n);
            std::string getName() const;

            std::string toString() const override;
            std::string tuple() const override;

            Group& operator=(const Group& g);
            friend std::ostream& operator<<(std::ostream& s, const Group& g);
    };

}
#endif