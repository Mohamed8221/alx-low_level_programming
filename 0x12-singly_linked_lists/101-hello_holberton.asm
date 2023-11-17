section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, hello     ; The format string
    xor rax, rax       ; Zero out rax to pass only one argument

    ; Call printf
    call printf

    ; Return from main
    mov eax, 0x60      ; The syscall number for sys_exit
    xor edi, edi       ; Exit code 0
    syscall            ; Call the kernel
