CXXFLAGS = --std=c++17

game: main.o character.o story.o equipment.o items.o stats.o attributes.o *.h
	$(CXX) $(CXXFLAGS) main.o character.o story.o -o game

main.o: main.cpp *.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

character.o: character.cpp *.h
	$(CXX) $(CXXFLAGS) -c character.cpp -o character.o

story.o: story.cpp *.h
	$(CXX) $(CXXFLAGS) -c story.cpp -o story.o

equipment.o: equipment.cpp *.h
	$(CXX) $(CXXFLAGS) -c equipment.cpp -o equipment.o

items.o: items.cpp *.h
	$(CXX) $(CXXFLAGS) -c items.cpp -o items.o

stats.o: stats.cpp *.h
	$(CXX) $(CXXFLAGS) -c stats.cpp -o stats.o

attributes.o: attributes.cpp *.h
	$(CXX) $(CXXFLAGS) -c attributes.cpp -o attributes.o

clean: 
	rm -f *.o *.gch *~ a.out game
