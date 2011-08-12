.386
.model flat

include console.inc

.data

greet	byte	"Hello World!", 10

.code

main	proc

	mov	edx, offset greet
	mov	ecx, sizeof greet
	call	WriteS
	ret

main	endp

end


; ml hello.asm startup.obj








