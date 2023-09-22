section .data
    hello db 'Hello, Holberton',0x0A  ; The string to print, followed by a newline character

section .text
    global main

main:
    ; Prepare the arguments for the printf function
    mov rdi, hello  ; Load the address of the format string into rdi
    mov rax, 0      ; The syscall number for sys_write (printf uses write)
    call printf     ; Call the printf function

    ; Exit the program
    mov rax, 60     ; The syscall number for sys_exit
    xor rdi, rdi    ; Exit status: 0
    syscall

section .bss
    dummy resb 1    ; A dummy variable to satisfy the printf call

; Printf function
printf:
    ; Inputs:
    ;   rdi: Pointer to the format string
    ; Outputs:
    ;   None (rax is clobbered)
