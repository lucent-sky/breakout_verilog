# Makefile for Breakout Emulator (Verilator)

# Top-level Verilog module
TOP = breakout

# Sources
VERILOG_SRC = src/$(TOP).v
CPP_TESTBENCH = src/testbench.cpp

# Output binary
BIN = breakout_game

# Verilator build dir
OBJ_DIR = obj_dir

all: $(BIN)

$(BIN): $(VERILOG_SRC) $(CPP_TESTBENCH)
	verilator -Wall --cc $(VERILOG_SRC) --exe $(CPP_TESTBENCH) -o $(BIN)
	$(MAKE) -C $(OBJ_DIR) -f V$(TOP).mk $(BIN)

run: $(BIN)
	./$(OBJ_DIR)/$(BIN)

clean:
	rm -rf $(OBJ_DIR)
