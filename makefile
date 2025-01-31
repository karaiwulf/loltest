CFLAGS = -std=c11 -march=native -O3 -funroll-loops -Wall -Wextra -Werror -fPIC
RSFLAGS = --edition 2021 --crate-type lib --crate-name loltest -O -Cpanic=abort --deny warnings

loltest: main.c.o loltest.rs.o
	clang -g $(CFLAGS) -o $@ $^

main.c.o: main.c loltest.h
	clang -g -c $(CFLAGS) -o $@ $<

loltest.rs.o: loltest.rs
	rustc -g --emit obj $(RSFLAGS) -o $@ $<

.PHONY: clean
clean:
	@rm -f loltest *.o

