CC=gcc
LDFLAGS=-lallegro -lallegro_primitives -lallegro_font -lallegro_image -lallegro_memfile -lallegro_ttf -lallegro_color -lm
SOURCES=src/allegro_framework.c \
src/block.c \
src/colors.c \
src/mathlib.c \
src/playfield.c \
src/tetris.c
OBJ_DIR=obj
SRC_DIR=src
HEADERS=$(SOURCES:.c=.h)
OBJECTS=$(SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
EXECUTABLE=allegrotetris

all: $(EXECUTABLE) $(OBJECTS)
$(EXECUTABLE): $(OBJECTS)
$(CC) $(OBJECTS) -o $@ $(LDFLAGS)

$(OBJECTS): obj/%.o : src/%.c
$(CC) -c $< -o $@


clean:
rm -f obj/*.o $(EXECUTABLE)

 
