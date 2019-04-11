# wantongtang@foxmail.com 20190410
main:record.o ALSADevices.o kws.o
	g++    ALSADevices.o kws.o record.o main.cpp  -lasound  -o main -I../include -L../../lib/x86_64/ -lmobvoisdk -lpthread 
ALSADevices.o:
	g++ -c ALSADevices.cpp -I../include
record.o:
	g++ -c record.cpp -I../include
kws.o:
	g++ -c kws.cpp  -I../include
clean:
	rm -rf *.o main	
