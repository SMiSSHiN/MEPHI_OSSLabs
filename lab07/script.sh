#!/bin/bash

PROG_NAME=$1

gcc -std=c99 -Wall ${PROG_NAME}.c -o ${PROG_NAME}
./${PROG_NAME} & pstree
