
UTAPPNAME=utest

.PHONY: unittest.cpp
unittest.cpp: UT/ut_main.hpp
	@echo "Translating test" 
	ls;
	ls cxxtest;
	ls cxxtest/bin;
	cxxtest/bin/cxxtestgen --error-printer -o unittest.cpp UT/ut_main.hpp 
	
build_ut: unittest.cpp
	@echo "Compiling test" 
	${CXX} -o ${UTAPPNAME} -Icxxtest -Isrc unittest.cpp
		
exec_ut:
	./$(UTAPPNAME)

ut: build_ut exec_ut