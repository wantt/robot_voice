# wantongtang@foxmail.com 20190410
main:record2.o ALSADevices.o kws.o
	g++    ALSADevices.o kws.o record2.o main.cpp  -lasound  -o main -I../include -L../../lib/x86_64/ -lmobvoisdk -lpthread 
ALSADevices.o:
	g++ -c ALSADevices.cpp -I../include
record2.o:
	g++ -c record2.c -I../include
kws.o:
	g++ -c kws.cpp  -I../include
clean:
	rm -rf *.o main	
