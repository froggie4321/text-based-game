CXXFLAGS = --std=c++17

game: main.o character.o story.o *.h
	$(CXX) $(CXXFLAGS) main.o character.o story.o -o game

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

character.o: character.cpp *.h
	$(CXX) $(CXXFLAGS) -c character.cpp -o character.o

story.o: story.cpp *.h
	$(CXX) $(CXXFLAGS) -c story.cpp -o story.o

clean: 
	rm -f *.o *.gch *~ a.out game
