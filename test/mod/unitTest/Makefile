CC       =g++
CPPFLAGS =-I ../inc -I ../src   -MD
OBJS     := tests.o sample2.o sample2test.o sample4.o sample4test.o sample6test.o sample7test.o  sample9test.o 
DEPS     := tests.d sample2.d sample2test.d sample4.d sample4test.d sample6test.d sample7test.d  sample9test.d
CFLAGS   +=-I ../inc -I ../src 

LIBDIRS0 = ../

vpath %.cpp ./src ../src
vpath %.h ../inc 
test:$(OBJS) $(LIBDIRS0)
	g++ -o $@ $(OBJS) $(LIBS0) -lgmain -lgtest -lgmock -lpthread

-include $(DEPS)

.PHONY : clean distclean

clean:
	 @rm -f *.o
	@rm -f *.d
	@rm -f *.xml
	@rm -f fsm.lib


