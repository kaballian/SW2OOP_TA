# ===== Project settings =====
TARGET := exam24.exe
CXX    := C:\Strawberry\c\bin\g++.exe

CXXFLAGS := -std=c++17 -g -Wall -Wextra
LDFLAGS  :=

# ===== Auto-detect sources =====
SRCS := $(wildcard *.cpp)
OBJS := $(SRCS:.cpp=.o)

# ===== Rules =====
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(OBJS) $(TARGET) 2>nul || exit 0

run: $(TARGET)
	.\$(TARGET)

.PHONY: all clean run
