Test4: Test4.o Schedulable.o Professor.o Group.o Classroom.o
	g++ -o Test4 Test4.o Schedulable.o Professor.o Group.o Classroom.o

Schedulable.o: Schedulable.cpp Schedulable.h
	g++ -c Schedulable.cpp -o Schedulable.o

Professor.o: Professor.cpp Professor.h Schedulable.h
	g++ -c Professor.cpp -o Professor.o

Group.o: Group.cpp Group.h Schedulable.h
	g++ -c Group.cpp -o Group.o

Classroom.o: Classroom.cpp Classroom.h Schedulable.h
	g++ -c Classroom.cpp -o Classroom.o

Test4.o: Test4.cpp Professor.h Group.h Classroom.h Schedulable.h
	g++ -c Test4.cpp -o Test4.o

clean:
	rm -f Schedulable.o Professor.o Group.o Classroom.o Test4.o Test4