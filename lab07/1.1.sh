#!/bin/bash

ENV_COUNT_A=$(env | wc -l)
ENV_COUNT_B=$(./1.1)

echo $ENV_COUNT_A && echo $ENV_COUNT_B
