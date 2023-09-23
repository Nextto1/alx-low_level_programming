format: db 'Hello, Holberton\n',0
	extern printf
	global main
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
