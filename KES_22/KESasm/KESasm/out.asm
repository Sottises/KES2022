.586
.model flat, stdcall
includelib libucrt.lib
includelib kernel32.lib
includelib "..\KESasm\Debug\KESlib.lib"
ExitProcess PROTO:DWORD 
.stack 4096

 outnum PROTO : DWORD

 outstr PROTO : DWORD

 outstrline PROTO : DWORD

 outnumline PROTO : DWORD

 system_pause PROTO 

 random PROTO  : DWORD

 lenght PROTO  : DWORD

 power PROTO : DWORD, : DWORD
.const
 null_division BYTE 'ERROR: DIVISION BY ZERO', 0
 overflow BYTE 'ERROR: VARIABLE OVERFLOW', 0 
	L1 SDWORD 1
	L2 SDWORD 0
	L3 SDWORD 10
	L4 BYTE 'Dont give up', 0
	L5 BYTE 'String: ', 0
	L6 BYTE 'Length of string: ', 0
	L7 BYTE 'factorial: ', 0
	L8 BYTE 'Random number: ', 0
	L9 SDWORD -1
	L10 BYTE 'New random number: ', 0
	L11 BYTE 'Number of digit in factorial: ', 0
.data
	_factnewN SDWORD 0
	_Inlengthlen SDWORD 0
	_InlengthtempNum SDWORD 0
	_Inlengthdegree SDWORD 0
	mainstr DWORD ?
	mainlen SDWORD 0
	mainfactorial SDWORD 0
	mainnum SDWORD 0
	mainlenFact SDWORD 0

.code

_fact PROC _factN :  SDWORD 
	push _factN
	push L1
	pop ebx
	pop eax
	sub eax, ebx
	push eax
	pop _factnewN

	mov edx, _factN
	cmp edx, L2
	jz right1
	jnz wrong1
	jmp next1
right1:	mov eax, L1
	ret

SOMETHINGWRONG:
push offset null_division
call outstrline
call system_pause
push -1
call ExitProcess

EXIT_OVERFLOW:
push offset overflow
call outstrline
call system_pause
push -2
call ExitProcess
	jmp next1

wrong1:	push _factN
	push _fact
	push _factnewN
	pop edx
	pop edx
	push _factnewN
		call _fact
	push eax
	pop eax
	pop ebx
	imul ebx
	jo EXIT_OVERFLOW
	push eax
	pop _factN

	mov eax, _factN
	ret

next1:	mov eax, L1
	ret
_fact ENDP
_Inlength PROC _Inlengthnum :  SDWORD 
	push L2
	pop _Inlengthlen

	push _Inlengthnum
	pop _InlengthtempNum

	push L1
	pop _Inlengthdegree

	mov edx, _InlengthtempNum
	cmp edx, L2
	jnz cycle1
	jmp continue1
 cycle1:	push _Inlengthnum
	push power
	push L3
	push _Inlengthdegree
	pop edx
	pop edx
	pop edx
	push _Inlengthdegree
	push L3
		call power
	push eax
	pop ebx
	pop eax
	cmp ebx,0
	je SOMETHINGWRONG
	cdq
	idiv ebx
	push eax
	pop _InlengthtempNum

	push _Inlengthdegree
	push L1
	pop eax
	pop ebx
	add eax, ebx
	jo EXIT_OVERFLOW
	push eax
	pop _Inlengthdegree

	mov edx, _InlengthtempNum
	cmp edx, L2
	jnz cycle1
continue1:	push _Inlengthdegree
	push L1
	pop ebx
	pop eax
	sub eax, ebx
	push eax
	pop _Inlengthlen

	mov eax, _Inlengthlen
	ret

SOMETHINGWRONG:
push offset null_division
call outstrline
call system_pause
push -1
call ExitProcess

EXIT_OVERFLOW:
push offset overflow
call outstrline
call system_pause
push -2
call ExitProcess
_Inlength ENDP
main PROC
	push offset L4
	pop mainstr

	push lenght
	push mainstr
	pop edx
	pop edx
	push mainstr
		call lenght
	push eax
	pop mainlen

	push _fact
	push mainlen
	pop edx
	pop edx
	push mainlen
		call _fact
	push eax
	pop mainfactorial


push offset L5
call outstr

push mainstr
call outstrline

push offset L6
call outstr

push mainlen
call outnumline

push offset L7
call outstr

push mainfactorial
call outnumline
	push random
	push mainlen
	pop edx
	pop edx
	push mainlen
		call random
	push eax
	pop mainnum


push offset L8
call outstr

push mainnum
call outnumline
	mov edx, mainnum
	cmp edx, L2
	jle wrong2
	jmp next2
wrong2:	push mainnum
	push L9
	pop eax
	pop ebx
	imul ebx
	jo EXIT_OVERFLOW
	push eax
	pop mainnum


next2:
push offset L10
call outstr

push mainnum
call outnumline
	push _Inlength
	push mainfactorial
	pop edx
	pop edx
	push mainfactorial
		call _Inlength
	push eax
	pop mainlenFact


push offset L11
call outstr

push mainlenFact
call outnumline
call system_pause
push 0
call ExitProcess
SOMETHINGWRONG:
push offset null_division
call outstrline
call system_pause
push -1
call ExitProcess
EXIT_OVERFLOW:
push offset overflow
call outstrline
call system_pause
push -2
call ExitProcess
main ENDP
end main