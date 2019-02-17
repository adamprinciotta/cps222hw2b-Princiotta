all:	hw2b1 hw2b2

hw2b1:		hw2b1.cc
	g++ -std=c++11 -o $@ $^

hw2b2:		hw2b2.cc
	g++ -std=c++11 -o $@ $^
