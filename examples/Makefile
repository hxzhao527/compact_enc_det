ROOT_DIR:=$(shell dirname $(realpath $(firstword $(MAKEFILE_LIST))))
PROJECT_DIR:=$(shell dirname $(ROOT_DIR))

run:
	@clang++ -fuse-ld=mold -I$(PROJECT_DIR) -L${PROJECT_DIR}/lib -lced -o example $(ROOT_DIR)/main.cpp && ./example && rm example

.PHONY: run