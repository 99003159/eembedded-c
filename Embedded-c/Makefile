# Name of the project
PROJECT_NAME = operation
   
# Output directory
BUILD = build
 
# All source code files
SRC = src/square.c\
src/cube.c\
main.c

 
# All include folders with header files
INC	= -Iinc\
 

PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

	
# Default target built
$(PROJECT_NAME):all
# Run the target even if the matching name exists
.PHONY: run clean test  doc all
	
all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)
	
# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT)


# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) 

# Create new build folder if not present
$(BUILD):
	mkdir build
