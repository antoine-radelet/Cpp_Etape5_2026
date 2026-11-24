#include "Timing.h"


#include <stdlib.h>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

namespace planning{

	const string Timing::MONDAY    = "Lundi";
	const string Timing::TUESDAY   = "Mardi";
	const string Timing::WEDNESDAY = "Mercredi";
	const string Timing::THURSDAY  = "Jeudi";
	const string Timing::FRIDAY    = "Vendredi";
	const string Timing::SATURDAY  = "Samedi";
	const string Timing::SUNDAY    = "Dimanche";

	Timing::Timing(){
		//cout<<"Timing constructeur par defaut"<<endl;
		setDay("pas de jour");
		setStart(Time ());
		setDuration(Time ());
	}

	Timing::Timing(string d, const Time& h, const Time& dur){
		//cout<<"Timing constructeur d'initialisation de Timing"<<endl;
		setDay(d);
		setStart(h);
		setDuration(dur);
	}

	Timing::Timing(const Timing& t){
		//cout<<"Timing constructeur de copie"<<endl;
		setDay(t.day);
		setStart(t.start);
		setDuration(t.duration);
	}

	Timing::~Timing(){
		//cout<<">>> Timing destructeur <<<"<<endl;
	}

	void Timing::setDay(string d){
		day = d;
	}

	void Timing::setStart(const Time& t){
		start = t;
	}

	void Timing::setDuration(const Time& t){
		duration = t;
	}

	string Timing::getDay()const {
		return day;
	}

	Time Timing::getDuration()const {
		return duration;
	}

	Time Timing::getStart()const {
		return start;
	}

	void Timing::display() const
	{
	    cout << "Evenement le " << day << " à ";
	    start.display();
	    cout << "pendant ";
	    duration.display();
	}

	int Timing::operator<(const Timing& t){
		return compT(t)==-1;
	}

	int Timing::operator>(const Timing& t){
		return compT(t)==1;
	}

	int Timing::operator==(const Timing& t){
		return compT(t)==0;
	}

	int Timing::compT(const Timing& t){
	
		int num1 = 0,num2 = 0;
		if (day == MONDAY)         num1 = 1;
		else if (day == TUESDAY)   num1 = 2;
		else if (day == WEDNESDAY) num1 = 3;
		else if (day == THURSDAY)  num1 = 4;
		else if (day == FRIDAY)    num1 = 5;
		else if (day == SATURDAY)  num1 = 6;
		else if (day == SUNDAY)    num1 = 7;

		if (t.day == MONDAY)         num2 = 1;
		else if (t.day == TUESDAY)   num2 = 2;
		else if (t.day == WEDNESDAY) num2 = 3;
		else if (t.day == THURSDAY)  num2 = 4;
		else if (t.day == FRIDAY)    num2 = 5;
		else if (t.day == SATURDAY)  num2 = 6;
		else if (t.day == SUNDAY)    num2 = 7;
    	
    	if (num1 < num2) return -1;
    	if (num1 > num2) return 1;
		if (start < t.start) return -1;
		if (start > t.start) return 1;
		if (duration < t.duration) return -1;
		if (duration > t.duration) return 1;
		return 0;
	}

}//end namespace 