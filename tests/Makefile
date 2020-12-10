all: test.exe

test.exe: main.o test_limited_field.o LimitedField.o
	g++ -o test.exe main.o test_limited_field.o LimitedField.o

main.o:
	g++ -c main.cpp

test_limited_fields.o:
	g++ -c test_limited_field.cpp

LimitedField.o:
	g++ -c ../utils/LimitedField.cpp