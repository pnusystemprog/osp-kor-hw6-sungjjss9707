phone: phoneBookMain.o register.o print.o delete.o search.o
	gcc -o phone phoneBookMain.o register.o print.o delete.o search.o

phoneBookMain.o: phoneBookMain.c
	gcc -c phoneBookMain.c

register.o: register.c
	gcc -c register.c

print.o: print.c
	gcc -c print.c

delete.o: delete.c
	gcc -c delete.c

search.o: search.c
	gcc -c search.c
