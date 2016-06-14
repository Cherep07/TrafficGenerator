APPNAME=tgr

default:
	$(CXX) --version
	@echo "List of targets:"
	@echo "    tgr      - build tgr targets"
	@echo "    exec     - execute tgr targets"	
	@echo "    ut       - execute unit tests"
	@echo "    clean    - clean all targets"

SRCDIR=src
CFLAGS=-Wall -Weffc++
		
$(APPNAME): ${SRCDIR}/*.cpp
	$(CXX) -std=c++11 ${CFLAGS} -o $@ $^  
		
exec:
	./$(APPNAME)

.PHONY: ut
ut: 
	${MAKE} -f ut.mk ut
	
clean:
	rm -rf *.o ${APPNAME}
	make -f ut.mk clean