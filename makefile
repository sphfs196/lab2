lab2:lab2Main.o lab2.o
	g++ -o lab2 lab2Main.o lab2.o
lab2Main.o:lab2Main.cpp lab2.h
	g++ -c lab2Main.cpp
lab2.o:lab2.cpp lab2.h
	g++ -c lab2.cpp
clean:
	rm lab2Main.o lab2.o
