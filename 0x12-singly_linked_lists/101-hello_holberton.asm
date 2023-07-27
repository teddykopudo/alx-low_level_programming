SECTION .data
msg:    db "Hello, Holberton", 0
fmt:    db "%s", 10, 0

SECTION .text
    extern printf
    global main

main:
    ; Load the address of the message into RSI (or ESI for 32-bit)
    lea rsi, [msg]

    ; Load the address of the format string into RDI (or EDI for 32-bit)
    lea rdi, [fmt]

    ; Clear RAX (or EAX for 32-bit) to indicate no floating-point arguments
    xor eax, eax

    ; Call the printf function
    call printf

    ; Set the return value to 0
    xor eax, eax

    ; Return from the main function
    ret

