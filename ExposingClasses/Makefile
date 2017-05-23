CC 		= g++
CFLAGS  = -c -fPIC -I/usr/include/python2.7
LFLAGS	= -lpython2.7 -lboost_python
SFLAGS	= -shared -Wl,-soname,$(TARGET).so

OBJDIR  = .objs

SOURCE	= $(TARGET).cpp
OBJECT	= $(OBJDIR)/$(TARGET).o

RM		= rm -rf

	
all: build $(TARGET)

$(TARGET): $(OBJECT)
	$(CC) $(SFLAGS) -o $(TARGET).so $(OBJECT) $(LFLAGS)

$(OBJECT): $(OBJDIR)/%.o : %.cpp
	$(CC) $(CFLAGS) $< -o $@

build:
	@mkdir -p $(OBJDIR)

.PHONY: clean cleanall

clean:
	@$(RM) $(OBJDIR) *.o *~

cleanall:
	@$(RM) $(EXEC) $(OBJDIR) *.o *~

help:
	@echo ""
	@echo " usage: make TARGET=ProjectYouWantToBuild"
	@echo " example: make TARGET=ExposingClasses"
	@echo ""
