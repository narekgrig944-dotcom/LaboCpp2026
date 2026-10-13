Test2: Test2.o Time.o Timing.o Event.o
	g++ -o Test2 Test2.o Time.o Timing.o Event.o

Time.o: Time.cpp Time.h
	g++ -c Time.cpp -o Time.o

Timing.o: Timing.cpp Timing.h Time.h
	g++ -c Timing.cpp -o Timing.o

Event.o: Event.cpp Event.h Timing.h Time.h
	g++ -c Event.cpp -o Event.o

Test2.o: Test2.cpp Time.h Timing.h Event.h
	g++ -c Test2.cpp -o Test2.o

clean:
	rm -f Time.o Timing.o Event.o Test2.o Test2