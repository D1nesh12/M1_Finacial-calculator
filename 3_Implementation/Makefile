# Name of the project
PROJECT_NAME = Calculator

#Doxyfile folder
DOC = doc

# All source code files
SRC = main.c\
src/functions.c

# All test source files
TEST_SRC = src/functions.c\
test/test_functions.c\
unity/unity.c\

TEST_OUTPUT = Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\


# Project Output name
PROJECT_OUTPUT = $(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = doc/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -lm -o $(PROJECT_OUTPUT)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)

#Documentation using doxygen
doc: $(DOC)
	make -C $(DOC) doc

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -lm -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)
#Coverage
coverageCheck: 
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(PROJECT_OUTPUT) $(TEST_OUTPUT) $(DOCUMENTATION_OUTPUT)

