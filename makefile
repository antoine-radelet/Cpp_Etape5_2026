Test4:	Test4.cpp Event.o Time.o Timing.o Schedulable.o Professor.o Group.o Classroom.o
	g++  Test4.cpp Event.o Time.o Timing.o Schedulable.o Professor.o Group.o Classroom.o -o Test4

Event.o:	Event.cpp Event.h
	g++ Event.cpp -c

Time.o:	Time.cpp Time.h
	g++	Time.cpp -c

Timing.o:	Timing.cpp Timing.h Time.h
	g++ Timing.cpp -c

Schedulable.o:	Schedulable.cpp Schedulable.h 
	g++ Schedulable.cpp -c

Professor.o:	Professor.cpp Professor.h
	g++ Professor.cpp -c

Group.o:	Group.cpp Group.h
	g++ Group.cpp -c

Classroom.o:	Classroom.cpp Classroom.h
	g++ Classroom.cpp -c