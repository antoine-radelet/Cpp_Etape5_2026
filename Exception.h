#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

namespace planning {

    class Exception {
        protected:

            std::string message;

        public:

            Exception();

            Exception(std::string m);

            Exception(const Exception& e);

            virtual ~Exception();

            void setMessage(std::string m);

            std::string getMessage() const;
    }
    
}//end namespace
