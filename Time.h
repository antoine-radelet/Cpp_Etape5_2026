#ifndef TIME_H
#define TIME_H

#include <iostream>

namespace planning{

	class Time{

		private:

			int hour;

			int min;

			int compT(const Time& t);

		public: 

			Time();//constructeur par defaut

			Time(int h,int m);//constructeur d'initialisation d'heure

			Time(int d);//constructeur d'initialisation de durée

			Time(const Time& t);//constructeur de copie

			~Time();//destructeur

			void setHour(int h);

			void setMinute(int m);

			int getHour()const;

			int getMinute()const;

			void display()const;

			Time& operator=(const Time& d);

			friend Time operator+(Time t,int x);
			friend Time operator+(int x,Time t);
			friend Time operator+(Time t1,Time t2);

			friend Time operator-(Time t,int x);
			friend Time operator-(int x,Time t);
			friend Time operator-(Time t1,Time t2);

			int operator<(const Time& t);
			int operator>(const Time& t);
			int operator==(const Time& t);

			friend std::ostream& operator<<(std::ostream& s, const Time& t);
            friend std::istream& operator>>(std::istream& s, Time& t);

            Time operator++();
            Time operator++(int t);
            Time operator--();
            Time operator--(int t);

	};

}//end namespace 
#endif