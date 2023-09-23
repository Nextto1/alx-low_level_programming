section .data
	hello db 'Hello, Holberton\n', 0 ; The string to be printed
	format db "%s",0 ;format specifier for printf,null-terminated
section .text
	extern printf
	global main
main:
	push rbp ; It saves the base pointer
	mov rdi, format ;The format string
	mov rsi, hello ;Load the address of the string
	call printf ; call the printf function
	pop rbp     ;To restore the base pointer
	xor rax,rax ;Set return value to 0 for success
	ret
