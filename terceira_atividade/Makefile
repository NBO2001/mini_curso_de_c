PRJ = $(shell basename $(CURDIR))

all: $(PRJ)

$(PRJ): *.c *.h
	gcc -std=c11 -I . -o $(PRJ) *.c

.PONHY: clean

clean: 
	-@rm -f $(PRJ) *.o *~
