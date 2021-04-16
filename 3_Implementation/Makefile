PROJECT_NAME = Calculator
TEST_NAME=TEST_$(PROJECT_NAME)
DO_IT =  src/functions.c 
TEST_CASE= test/test_calculator.c unity/unity.c 
COVERAGE_NAME=coverage_$(PROJECT_NAME)
#To check the OS windows or Liux depending on that extension is set
ifdef OS
	RM = del /q
	FixPath=$(subst /,\,$1)
	EXEC=exe
	editor=notepad
else
	ifeq ($(shell uname), Linux)
		RM=rm -rf
		FixPath=$1
			EXEC=out
			editor=cat
	endif
endif

#Makefile will not run target command if the name with the file already exists. To override, use PHONY
.PHONY : all test coverage run clean doc

$(PROJECT_NAME) : $(SRC) 
	gcc main.c  -I -c $(DO_IT) -o $(call  FixPath,$(PROJECT_NAME).$(EXEC))
run: $(PROJECT_NAME)
	./$(PROJECT_NAME).$(EXEC)
test:
	gcc test/test_calculator.c -I -c unity/unity.c -o test/$(TEST_NAME).$(EXEC)
	./test/$(TEST_NAME).$(EXEC)
coverage:$(SRC)
		gcc -fprofile-arcs -ftest-coverage main.c -I -c $(DO_IT) -o $(COVERAGE_NAME).$(EXEC)
		./$(COVERAGE_NAME).$(EXEC)
		gcov -a main.c
		$(editor) main.c.gcov

clean:
	$(RM) *.$(EXEC)
	$(RM) *.gcn
	$(RM) *.gcov
	$(RM) *.gcda
	$(RM) *.gcno
