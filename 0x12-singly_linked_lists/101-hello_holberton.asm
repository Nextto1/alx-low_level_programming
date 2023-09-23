section .data
	hello db 'Hello, Holberton\n', 0 ; The string to be printed
	format db "%s",0 ;format specifier for printf,null-terminated

section .text
	extern printf
	global main
main:
	; Save the base pointer and align the stack to a 16-byte boundary
	push rbp
	mov rbp, rsp
	sub rsp, 8

	; Prepare the arguments for printf
	mov rdi, format ; The format string
	mov rsi, hello ; Load the address of the string

	; Call printf
	call printf

	; Restore the stack and the base pointer
	add rsp, 8
	pop rbp
