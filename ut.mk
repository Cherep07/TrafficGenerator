
UTAPPNAME=utest
CFLAGS=-Wall -DCXXTEST_RUNNING -fprofile-arcs -ftest-coverage
INCLUDES=-Icxxtest -Isrc

.PHONY: unittest.cpp
unittest.cpp: UT/ut_*.hpp
	@echo "Translating test" $^
	cxxtest/bin/cxxtestgen -o $@ --error-printer $^  
	
build_ut: unittest.cpp src/*
	@echo "Compiling test" 
	${CXX} ${CFLAGS} -std=c++14 -o ${UTAPPNAME} ${INCLUDES}  unittest.cpp src/*.cpp

ut: build_ut
	./$(UTAPPNAME)

clean:
	rm -rf unittest.cpp
	rm -rf $(UTAPPNAME)