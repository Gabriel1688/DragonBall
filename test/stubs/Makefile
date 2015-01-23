CC       =g++
#CPPFLAGS =-I ./inc -I ./../inc_ext  -I ./../main/inc -fno-rtti  -MD
CPPFLAGS =-I ./inc -I ./../inc_ext  -I ./../main/inc   -MD
#OBJS     := fsm.o object.o protocoltask.o  
#DEPS     := fsm.d object.d protocoltask.d  
OBJS     := fsm.o  protocoltask.o  
DEPS     := fsm.d  protocoltask.d  
CFLAGS   +=-I ./inc -I ./../inc_ext  -I ./../main/inc  -MD
CFLAGS   +=-I ./inc -I ./../inc_ext  -I ./../main/inc  -MD

vpath %.cpp ./src
vpath %.h ./inc ../include

fsm.lib:$(OBJS)
#libfsm.a:$(OBJS)
	 $(AR) rcs $@ $(OBJS)

-include $(DEPS)

.PHONY : clean distclean

clean:
	 @rm -f *.o
	@rm -f *.d
	@rm -f fsm.lib


