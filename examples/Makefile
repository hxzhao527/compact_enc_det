ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))
PROJECT_DIR:=$(shell dirname $(ROOT_DIR))

run:
	@clang++ -I$(PROJECT_DIR) -L${PROJECT_DIR}/lib -o example $(ROOT_DIR)/main.cpp -lced && ./example && rm example

.PHONY: run