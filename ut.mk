
UTAPPNAME=utest
CFLAGS=-Wall -DCXXTEST_RUNNING -fprofile-arcs -ftest-coverage
INCLUDES=-Icxxtest -Isrc

.PHONY: unittest.cpp
unittest.cpp: UT/ut_*.hpp
	@echo "Translating test" $^
	cxxtest/bin/cxxtestgen --error-printer -o unittest.cpp $^  
	
build_ut: unittest.cpp
	@echo "Compiling test" 
	${CXX} ${CFLAGS} -std=c++14 -o ${UTAPPNAME} ${INCLUDES}  unittest.cpp src/*.cpp
		
run_ut:
	./$(UTAPPNAME)

ut: build_ut run_ut

clean:
	rm -rf unittest.cpp
	rm -rf $(UTAPPNAME)