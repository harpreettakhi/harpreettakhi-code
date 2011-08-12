.386
.model flat

include console.inc

.code

sum	proc
	
	enter	4, 0		; push ebp : mov ebp,esp : sub esp, 4

	mov	eax, 0
	mov	edx, 2
begin:	mov	ecx, [ebp+4*edx]
	jecxz	done		; cmp ecx, 0 : je done
	add	eax, ecx
	inc	edx
	jmp	begin

done:	leave			; mov esp,ebp : pop ebp
	ret

sum	endp

prompt byte	"Enter number : "
answer byte	"Total = "

main	proc

	enter	0, 0
	
	push	0
begin:	Print	prompt
	call	ReadI
	and	eax, eax
	jz	done
	push	eax
	jmp	begin
done:	call	sum

	Print	answer
	call	WriteI
	mov 	al, lf
	call	WriteC
	
	leave		
	ret

main	endp

end






