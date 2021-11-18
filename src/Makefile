CXX=g++
CXX_FLAGS=-std=c++20 -fmax-errors=1 -g

HEADER_FILES=VanJamSPE.h \
			 Operator.h \
			 InputOperator.h \
			 GenericOperator.h

OBJS=Operator.o

APPS=simpleTest

all: $(APPS)

libVanJamSPE.a: $(HEADER_FILES) $(OBJS)
	@echo "Compiling & Linking libVanJamSPE.a ..."
	@ar rvs libVanJamSPE.a $(OBJS)

simpleTest: main.cpp libVanJamSPE.a $(HEADER_FILES)
	@echo "Compiling & Linking simpleTest ..."
	@$(CXX) $(CXX_FLAGS) main.cpp -o simpleTest -L . -lpthread -lVanJamSPE

Operator.o: Operator.cpp Operator.h GenericOperator.h
	@echo "Compiling Operator.o ..."
	@$(CXX) -c $(CXX_FLAGS) Operator.cpp -o Operator.o

run: simpleTest
	./simpleTest

clean:
	@echo "Cleaning..."
	rm -f $(APPS) $(OBJS) libVanJamSPE.a
