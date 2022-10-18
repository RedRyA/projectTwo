main: main.c header.c header.h
	gcc main.c header.c header.h -o main

clean:
	rm main
	rm *.o