.386
.model flat

.code

?Term@FibX@@QBEHI@Z	proc

	mov	edx, [ecx]	; first
	mov	eax, [ecx+4]	; second
	mov	ecx, [esp+4]	; term
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret	4

?Term@FibX@@QBEHI@Z	endp

?Term@FibX@@QBAHI@Z	proc

	mov	ecx, [esp+4]	; this
	mov	edx, [ecx]	; first
	mov	eax, [ecx+4]	; second
	mov	ecx, [esp+8]	; term
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret

?Term@FibX@@QBAHI@Z	endp

?Term@FibX@@QBGHI@Z	proc

	mov	ecx, [esp+4]	; this
	mov	edx, [ecx]	; first
	mov	eax, [ecx+4]	; second
	mov	ecx, [esp+8]	; term
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret	8

?Term@FibX@@QBGHI@Z	endp

?Term@FibX@@QBIHI@Z	proc

	xchg	edx, ecx	; edx=this:ecx=term
	mov	eax, [edx+4]	; second
	mov	edx, [edx]	; first
begin:	xchg	eax, edx
	add	eax, edx
	loop	begin
	ret

?Term@FibX@@QBIHI@Z	endp

end



