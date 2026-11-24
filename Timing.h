#ifndef TIMING_H
#define TIMING_H
#include "Time.h"
#include <string>
using namespace std;

namespace planning{

	class Timing{

		private:

			string day;

			Time start;

			Time duration;

			int compT(const Timing& t);

		public:

			static const std::string MONDAY;
			static const std::string TUESDAY;
			static const std::string WEDNESDAY;
			static const std::string THURSDAY;
			static const std::string FRIDAY;
			static const std::string SATURDAY;
			static const std::string SUNDAY;

			Timing();

			Timing(string d,const Time& start,const Time& duration);

			Timing(const Timing& t);

			~Timing();

			void setDay(string d);

			void setStart(const Time& t);

			void setDuration(const Time& t);

			string getDay() const;
			
			Time getStart() const;

			Time getDuration() const;

			void display()const;

			int operator<(const Timing& t);
			int operator>(const Timing& t);
			int operator==(const Timing& t);
	};

}//end namespace 
#endif