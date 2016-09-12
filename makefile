
SRC := $(shell find ./ -name '*.cpp')
OBJ := $(SRC:%.cpp=%.o)

%.o : %.cpp
	g++ -c -o $@ $^

babies : $(OBJ)
	g++ $(OBJ)

clean : 
	$(RM) *.o
	$(RM) *.out
