PRJ = $(shell basename $(CURDIR))

all: $(PRJ)

$(PRJ): *.c 
	gcc -std=c11 -I . -o $(PRJ) *.c

.PONHY: clean

clean: 
	-@rm -f $(PRJ) *.o *~



