make: Head.h Interface.c main.c Memory.c WorldOps.c
	gcc Head.h Interface.c main.c Memory.c WorldOps.c -o Game

test: MakeTest.c
	gcc MakeTest.c -o generateTest

clean: Game
	rm Game
