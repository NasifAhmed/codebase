#!/bin/bash

source=~/Workspace/codebase/CP/standard.cpp
cp $source $1.cpp
nvim $1.cpp
