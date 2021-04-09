# A mettre a jour : répertoire d'installation de Google Test
GTEST_DIR = ../googletest/googletest
GTEST_LIB = ../googletest/lib

CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++11

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

TEST_TP2.out: TEST_TP2.o Calculator.o
	g++ $(CPP_FLAGS) -o TEST_TP2.out TEST_TP2.o Calculator.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a

TEST_TP2.o: TEST_TP2.cpp Calculator.h
	g++ -c $(CPP_FLAGS) TEST_TP2.cpp

Calculator.o: Calculator.cpp Calculator.h
	g++ -c $(CPP_FLAGS) Calculator.cpp