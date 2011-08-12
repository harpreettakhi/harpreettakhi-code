.386
.model flat

include console.inc

.code

gcdlcm	proc

	push	ebp
	mov	ebp, esp	; prolog
	
	mov	ecx, [ebp+8]
	mov	ebx, [ebp+12]
	mov	eax, ecx
	mul	ebx
	mov	edx, ebx
begin:	cmp	ecx, edx
	je	done
	jl	skip
	sub	ecx, edx
	jmp	begin
skip:	sub	edx, ecx
	jmp	begin
done:	xor	edx, edx
	div	ecx
	xchg	eax, ecx
	mov	ebx, [ebp+16]
	mov	[ebx], ecx

	mov	esp, ebp	; epilog
	pop	ebp
	ret

gcdlcm	endp

prompt1	byte	"First number : "
prompt2	byte	"Second number : "
answer1	byte	"G.C.D = "
answer2	byte	" and L.C.M = "

main	proc

	push	ebp
	mov	ebp, esp
	sub	esp, 4
	
	Print	prompt1
	call	ReadI
	mov	ebx, eax
	Print	prompt2
	call	ReadI

	lea	edx, [ebp-4]
	push	edx
	push	eax
	push	ebx
	call	gcdlcm
	add	esp, 12

	Print	answer1
	call	WriteI
	Print	answer2
	mov	eax, [ebp-4]
	call	WriteI
	mov	al, lf
	call	WriteC

	mov	esp, ebp
	pop	ebp
	ret

main	endp

end




