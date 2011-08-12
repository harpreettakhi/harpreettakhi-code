.386
.model flat

include console.inc

.code

gcd	proc

	push	ebp
	mov	ebp, esp	; prolog
	
	mov	ecx, [ebp+8]
	mov	edx, [ebp+12]
begin:	cmp	ecx, edx
	je	done
	jl	skip
	sub	ecx, edx
	jmp	begin
skip:	sub	edx, ecx
	jmp	begin
done:	mov	eax, ecx	

	mov	esp, ebp	; epilog
	pop	ebp
	ret

gcd	endp

prompt1	byte	"First number : "
prompt2	byte	"Second number : "
answer1	byte	"G.C.D = "

main	proc

	Print	prompt1
	call	ReadI
	mov	ebx, eax
	Print	prompt2
	call	ReadI

	push	eax
	push	ebx
	call	gcd
	add	esp, 8
	
	Print	answer1
	call	WriteI
	mov	al, lf
	call	WriteC

	ret

main	endp

end




