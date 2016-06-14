APPNAME=tgr

default:
	@echo "List of targets:"
	@echo "    tgr      - build tgr targets"
	@echo "    exec     - execute tgr targets"	
	@echo "    ut       - execute unit tests"
	@echo "    clean    - clean all targets"

SOURCES=main.cpp
SRCDIR=src
CFLAGS=-Wall
		
$(APPNAME): ${SRCDIR}/${SOURCES}
	$(CXX) ${CFLAGS} -o $@ $^  
		
exec:
	./$(APPNAME)

.PHONY: ut
ut: 
	${MAKE} -f ut.mk ut
	
clean:
	rm -rf *.o ${APPNAME}