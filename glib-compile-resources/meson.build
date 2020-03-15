project('embedbin-glib', 'c')

glib-compile-resources = find_program('glib-compile-resources')
hello_c = custom_target('gen-hello-c',
			input: 'hello.txt',
			output: 'hello.c',
			command: ['glib-compile-resources',
				  '-i',
				  '@INPUT@',
				  '@OUTPUT@'])

executable('eftest-glib-compile-resources', 'main.c', hello_c)