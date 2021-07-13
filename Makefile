## -- just for compiling, C needs the path to the .h files
X11_INC_PATH  = -I/opt/X11/include/

## -- library
X11_LIBS_PATH = -L/opt/X11/lib/
X11_LIBS      = -lX11

OBJ=main.o touch.o io.o keyboard.o screen.o terminal.o protocol.o

all: platoterm

platoterm: $(OBJ)
	gcc  $(OBJ) -ansi -Wall $(X11_INC_PATH) $(X11_LIBS_PATH) $(X11_LIBS) -o platoterm

clean:
	rm -rf platoterm $(OBJ)

run:
	./platoterm cyberserv.org 8005
