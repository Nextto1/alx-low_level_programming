hello db 'Hello, Holberton\n', 0 ; The string to be printed
format db "%s",0 ;format specifier for printf,null-terminated

	extern printf
	global main
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  mov   eax, 0
	  ret
