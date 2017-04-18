executable: *.cpp
	g++ *.cpp -o ./executable.out -std=c++11 -g

clean:
	rm *.out
