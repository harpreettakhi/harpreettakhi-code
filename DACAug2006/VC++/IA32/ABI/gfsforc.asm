.386
.model flat

.code

_FibX	proc

	mov	ecx, [esp+4]	; term
	mov	edx, [esp+8]	; first
	mov	eax, [esp+12]	; second
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret

_FibX	endp


_FibX@12	proc		; __stdcall

	mov	ecx, [esp+4]	; term
	mov	edx, [esp+8]	; first
	mov	eax, [esp+12]	; second
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin		
	ret	12

_FibX@12	endp

@FibX@12	proc		; __fastcall

	mov	eax, [esp+4]	; second
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin		
	ret	4

@FibX@12	endp

_FibX_	proc		; customcall

begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret

_FibX_	endp

end






