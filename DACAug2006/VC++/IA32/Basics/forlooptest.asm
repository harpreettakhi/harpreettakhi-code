.386
.model flat

include console.inc

.code

main	proc
	
	mov	eax, 0
begin:	cmp	byte ptr [edx], ' '
	jne	skip
	inc	eax
skip:	inc	edx
	loop	begin	; dec ecx : jnz begin

	call	WriteI
	mov	al, lf
	call	WriteC
	ret

main	endp

end




