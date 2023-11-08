#!/usr/bin/python3

# Define the file name
header_file="python.h"

# Create or overwrite the header file
cat > "$header_file" <<EOF
#ifndef ALX_PYTHON_H
#define ALX_PYTHON_H

// Include Python.h

#include <Python.h>

// Define a Python module struct (simplified)
typedef struct {
    PyObject_HEAD
    PyObject *name;
} ALXModule;

// Function to create a new ALXModule instance
ALXModule* ALXModule_Create(const char* name);

// Function to print the ALXModule's name
void ALXModule_PrintName(ALXModule* module);

#endif /* ALX_PYTHON_H */
EOF

echo "Generated $header_file"

