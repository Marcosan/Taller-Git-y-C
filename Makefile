libcompartida.so: ./src/cifrado.c
	gcc -Wall -shared -fPIC ./src/cifrado.c -o ./lib/libcompartida.so

codificacion.o: ./src/codificacion.c
	gcc -Wall -c ./src/codificacion.c -o ./obj/codificacion.o

main.o: ./src/main.c
	gcc -Wall -c ./src/main.c -o ./obj/main.o


cifrador: ./obj/codificacion.o ./obj/main.o ./lib/libcompartida.so
	gcc ./obj/codificacion.o ./obj/main.o ./lib/libcompartida.so -o ./bin/cifrador

clean:
	rm -f ./bin/cifrador
	rm -f ./obj/*.o
	rm -f ./lib/*.so
