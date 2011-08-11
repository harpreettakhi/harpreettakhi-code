.intel_syntax noprefix

.text

msg:		.ascii	"Hello Linux/x86\n"

_start:
	mov	eax, 4
	mov	ebx, 1
	mov	ecx, offset msg
	mov	edx, 16
	int 128
	mov	eax, 1
	mov ebx, 0
	int 128
	ret

.global	_start

.end
