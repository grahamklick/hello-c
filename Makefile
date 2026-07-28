CC = clang
CFLAGS = -Wall -Wextra -Wpedantic -std=c17 -g
TARGET = build/main
SOURCES = src/main.c

all: $(TARGET)

$(TARGET): $(SOURCES)
	mkdir -p build
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build

.PHONY: all run clean