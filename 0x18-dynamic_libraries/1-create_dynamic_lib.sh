#!/bin/bash

# Compile all .c files in the current directory into object files
for file in *.c; do
    if [ -f "$file" ]; then
        echo "Compiling $file"
        gcc -c -fPIC "$file" -o "${file%.c}.o"
    fi
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up by removing the object files
rm *.o
