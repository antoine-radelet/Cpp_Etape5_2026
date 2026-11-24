#ifndef TIMEEXCEPTION_H
#define TIMEEXCEPTION_H

#include <iostream>

#include "Exception.h"

namespace planning {

    class TimeException : public Exception {
        private:
            int code;

        public:
            TimeException();
            TimeException(int i, const std::string& n);
            TimeException(const TimeException& g);
            ~TimeException();

            void setName(const std::string& n);
            std::string getName() const;
    };

}
#endif