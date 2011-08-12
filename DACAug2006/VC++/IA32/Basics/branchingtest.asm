.386
.model flat

include console.inc

.data

first	dword 0
second	dword 0
result	dword ?

.code

prompt	byte "Enter number : "
answer	byte "Result = "

main	proc
	
	Print	prompt
	call	ReadI
	mov	first, eax
	Print	prompt
	call	ReadI
	mov	second, eax
	
	mov	eax, first
	mov	ebx, second
	cmp	eax, ebx
	jge	skip
	mov	eax, ebx
skip:	mov	result, eax

	Print	answer
	mov	eax, result
	call	WriteI
	mov	al, 10
	call	WriteC
	ret

main	endp


end

; ml globvartest.asm startup.obj




