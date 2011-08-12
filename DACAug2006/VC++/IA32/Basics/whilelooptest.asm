.386
.model flat

include console.inc

.code

main	proc
	
begin:	cmp	byte ptr [edx], 20h
	je	done
	inc	edx
	dec	ecx
	jmp	begin

done:	inc	edx
	dec	ecx
	call	WriteS
	mov	al, lf
	call	WriteC
	ret

main	endp

end




