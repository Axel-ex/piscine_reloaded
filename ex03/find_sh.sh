#!/bin/zsh
find . -type f -name "*.sh" -execdir basename {} .sh \; 
