project('eftest-xxd', 'c')

xxd = find_program('xxd')
hello_c = custom_target('gen-hello-c',
			input: 'hello.txt',
			output: 'hello.c',
			command: ['xxd',
				  '-i',
				  '@INPUT@',
				  '@OUTPUT@'])

executable('eftest-xxd', 'main.c', hello_c)