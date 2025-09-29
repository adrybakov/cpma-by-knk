TARGET?=NONE

compile:
	@clang -O -Wall -W -pedantic -std=c99 $(TARGET)