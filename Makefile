CC = clang
CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -g
TARGET = build/lesson01
SOURCES = lessons/lesson01.c

all: $(TARGET)

$(TARGET): $(SOURCES)
	mkdir -p build
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build

.PHONY: all run clean