.386
.model flat

.data

first	dword 7
second	dword 5
result	dword ?

.code

main	proc

	mov	eax, first
	mov	ebx, eax
	mov	ecx, second
	add	eax, ecx	; eax=first+second
	sub	ebx, ecx	; ebx=first-second
	mul	ebx		; eax=(first+second)*(first-second)
	mov	result, eax
	ret

main	endp


end

; ml /Zi globvartestd.asm startup.obj




