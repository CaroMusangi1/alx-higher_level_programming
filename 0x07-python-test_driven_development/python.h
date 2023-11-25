#!/usr/bin/python3

# Define the file name
header_file="python.h"

# Create or overwrite the header file
cat > "$header_file" <<EOF
#ifndef ALX_PYTHON_H
#define ALX_PYTHON_H

// Include Python.h

#include <Python.h>"

def add_integer(a, b=98):
	def matrix_divided(matrix, div):
		def say_my_name(first_name, last_name=""):
		def print_square(size):
			def text_indentation(text):
				def matrix_mul(m_a, m_b):
					def lazy_matrix_mul(m_a, m_b):
						void print_python_string(PyObject *p);
						
						#endif /* ALX_PYTHON_H */
EOF

echo "Generated $header_file"
