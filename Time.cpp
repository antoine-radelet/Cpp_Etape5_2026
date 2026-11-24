#include "Time.h"

#include <stdlib.h>
#include <iostream>
#include <cstring>
using namespace std;
namespace planning{

	Time::Time(){
		//cout<<"Time constructeur par defaut"<<endl;
		setHour(0);
		setMinute(0);
	}

	Time::Time(int h,int m){
		//cout<<"Time constructeur d'initialisation d'heure"<<endl;
		setHour(h);
		setMinute(m);
	}

	Time::Time(int d){
		//cout<<"Time constructeur d'initialisation de durée"<<endl;
		int h=d/60;
		int m=d%60;
		setHour(h);
		setMinute(m);
	}

	Time::Time(const Time& t){
		//cout<<"Time constructeur de copie"<<endl;
		setHour(t.hour);
		setMinute(t.min);
	}

	Time::~Time(){
		//cout<<">>> Time destructeur <<<"<<endl;
	}

	void Time::setHour(int h){
		if(h<0 or h > 23)return;
		hour=h;
	}

	void Time::setMinute(int m){
		if(m<0 or m > 59)return;
		min=m;
	}

	int Time::getHour()const {
	  return hour;
	}

	int Time::getMinute()const {
		return min;
	}

	void Time::display()const{
		if(min<10) 
			cout<<hour<<"h0"<<min<<endl;
		else
			cout<<hour<<"h"<<min<<" ";
	}

	Time& Time::operator=(const Time& t){
		hour=t.hour;
		min=t.min;
		return (*this); 
	}

	Time operator+(Time t,int x){
	 
		Time ttemp(t);

		if (x<0) return ttemp;
		
		int h=x/60;
		int m=x%60;
		
		ttemp.min += m;
		if (ttemp.min>60){
			ttemp.min=ttemp.min%60;
			ttemp.hour+=1;
		}
		
		ttemp.hour+=h;
		if(ttemp.hour>23) {
			cout<<"heure au dela de 24h"<<endl;
			return t;
		}
		else return ttemp;
	}

	Time operator+(int x,Time t){
		return t+x;
	}

	Time operator+(Time t1,Time t2){
		Time ttemp(t1);
		
		ttemp.min += t2.min;
		if (ttemp.min>60){
			ttemp.min=ttemp.min%60;
			ttemp.hour+=1;
		}
		
		ttemp.hour+=t2.hour;
		if(ttemp.hour>23) {
			cout<<"heure au dela de 24h"<<endl;
			return t1;
		}
		else return ttemp;
	}

	Time operator-(Time t,int x){
	 
		Time ttemp(t);

		if (x<0) return ttemp;
		
		int h=x/60;
		int m=x%60;
		
		ttemp.min -= m;
		if (ttemp.min<0){
			ttemp.min=60+(t.min-m);
			ttemp.hour-=1;
		}
		
		ttemp.hour-=h;
		if(ttemp.hour<0) {
			cout<<"heure en dessous de 0h"<<endl;
			return t;
		}
		else return ttemp;
	}

	Time operator-(int x,Time t){
		Time t1(x);
		return t1-t;
	}

	Time operator-(Time t1,Time t2){
		Time ttemp(t1);
		
		ttemp.min -= t2.min;
		if (ttemp.min<0){
			ttemp.min=60+(t1.min-t2.min);
			ttemp.hour-=1;
		}
		
		ttemp.hour-=t2.hour;
		if(ttemp.hour<0) {
			cout<<"heure en dessous de 0h"<<endl;
			return t1;
		}
		else return ttemp;
	}

	int Time::operator<(const Time& t){
		return compT(t)==-1;
	}

	int Time::operator>(const Time& t){
		return compT(t)==1;
	}

	int Time::operator==(const Time& t){
		return compT(t)==0;
	}

	int Time::compT(const Time& t){
		if (hour < t.hour) return -1;
		if (hour > t.hour) return 1;
		if (min < t.min) return -1;
		if (min > t.min) return 1;
		return 0;
	}

	ostream& operator<<(ostream& s,const Time& t)
	{
	 s << t.hour << "h" <<  t.min << endl;
	 return s;
	}

	istream& operator>> (istream& s, Time& t)
	{
	 int h,m;
	 cout << "Heure : ";
   s >> h;
   cout << "Minute : ";
   s >> m;
	 t.setHour(h);
	 t.setMinute(m);
	 return s;
	}

	Time Time::operator++(){
		(*this) = (*this) +30;
		return (*this);
	}

	Time Time::operator++(int t){
		Time temp(*this);
		(*this) = (*this) +30;
		return temp;
	}

	Time Time::operator--(){
		(*this) = (*this) -30;
		return (*this);
	}

	Time Time::operator--(int t){
		Time temp(*this);
		(*this) = (*this) -30;
		return temp;
	}


}//end namespace 