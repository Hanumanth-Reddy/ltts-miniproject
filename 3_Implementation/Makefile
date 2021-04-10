PROJ_NAME = Calculator
TEST_PROJ_NAME = Test_$(PROJ_NAME)

BUILD_DIR = Build

SRC = src/calculator_operations.c
TEST_SRC = test/test_calculator_operations.c\
unity/unity.c

INC = -Iinc\
-Iunity

#To check if the OS is Windows or Linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

# Makefile will not run target command if the name with file already exists. To override, use .PHONY
.PHONY : all test coverage run clean 
all:$(BUILD_DIR)
	gcc $(TEST_SRC) $(SRC) $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))

run: $(BUILD_DIR)
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
coverage:$(BUILD_DIR)
	gcc main.c $(SRC) $(INC) -fprofile-arcs -ftest-coverage -lm -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).$(EXEC))
   ##perform gcov -a *.c to check coverage
clean:
	$(RM) $(call FixPath,$(BUILD_DIR)/*)
	$(RM) *.gcda *.gcov *gcno 
$(BUILD_DIR):
	mkdir $(BUILD_DIR)
valgrid:
	valgrid ./main.c
cppcheck: all
	cppcheck ./main.c   
git: $^
	git add .
	git commit -m "added unity test cases "
	git push -u origin master   
test: $(SRC)  $(TEST_SRC) 
	gcc $^ $(INC) -lm -o $(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath,$(BUILD_DIR)/$(TEST_PROJ_NAME).$(EXEC))