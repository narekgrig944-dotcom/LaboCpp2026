Test3: Test3.o Time.o Timing.o Event.o
	g++ -o Test3 Test3.o Time.o Timing.o Event.o

Time.o: Time.cpp Time.h
	g++ -c Time.cpp -o Time.o

Timing.o: Timing.cpp Timing.h Time.h
	g++ -c Timing.cpp -o Timing.o

Event.o: Event.cpp Event.h Timing.h Time.h
	g++ -c Event.cpp -o Event.o

Test3.o: Test3.cpp Time.h Timing.h Event.h
	g++ -c Test3.cpp -o Test3.o

clean:
	rm -f Time.o Timing.o Event.o Test3.o Test3