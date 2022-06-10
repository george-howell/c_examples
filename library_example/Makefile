static_lib:

shared_lib:
	# compile into position independant code
	gcc -Wall -Werror -fpic -c foo.c -o foo.o
	# create shared library
	gcc -shared -o libfoo.so foo.o
	# remove object file
	rm foo.o
	# move to folder (optional)
	mkdir test_lib && mv libfoo.so test_lib/libfoo.so

test_program_shared_lib: #shared_lib
	# link a shared library to a test program
	# -L specifies the library location
	# -l specifies the name of the library
	gcc -L./test_lib -Wall -o testProgram main.c -lfoo
	# if the library is placed in a location that is not in the root folder the loader will need a path to the library
	# (doesn't seem to work from here but works in console)
	export DYLD_FALLBACK_LIBRARY_PATH=./test_lib:${DYLD_FALLBACK_LIBRARY_PATH}
	# export to rpath (doesn't work!)
# 	gcc -L ./test_lib -Wl,-rpath,'./test_lib' -Wall -o testProgram main.c -l foo

clean_shared_lib:
	# remove shared library
	rm -r test_lib

clean_test_program:
	# remove shared library
	rm testProgram

clean_all: clean_shared_lib clean_test_program
