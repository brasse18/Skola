	.file	"Inlemning-komp-B.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	_Z7osProbev
	.type	_Z7osProbev, @function
_Z7osProbev:
.LFB1450:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$2, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1450:
	.size	_Z7osProbev, .-_Z7osProbev
	.section	.rodata
.LC0:
	.string	"pause"
.LC1:
	.string	"Press enter to continue ..."
.LC2:
	.string	"Stuff didn't go as planned"
	.text
	.globl	_Z5pausev
	.type	_Z5pausev, @function
_Z5pausev:
.LFB1451:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	_Z7osProbev
	cmpl	$1, %eax
	je	.L5
	cmpl	$1, %eax
	jl	.L4
	cmpl	$3, %eax
	jg	.L4
	jmp	.L9
.L5:
	movl	$.LC0, %edi
	call	system
	jmp	.L7
.L9:
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt3cin, %edi
	call	_ZNSi3getEv
	jmp	.L7
.L4:
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.L7:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1451:
	.size	_Z5pausev, .-_Z5pausev
	.section	.rodata
.LC3:
	.string	"cls"
.LC4:
	.string	"clear"
	.text
	.globl	_Z5clearv
	.type	_Z5clearv, @function
_Z5clearv:
.LFB1452:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	call	_Z7osProbev
	cmpl	$1, %eax
	je	.L12
	cmpl	$1, %eax
	jl	.L11
	cmpl	$3, %eax
	jg	.L11
	jmp	.L16
.L12:
	movl	$.LC3, %edi
	call	system
	jmp	.L14
.L16:
	movl	$.LC4, %edi
	call	system
	jmp	.L14
.L11:
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.L14:
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1452:
	.size	_Z5clearv, .-_Z5clearv
	.section	.rodata
.LC5:
	.string	"| "
.LC6:
	.string	"|A"
.LC7:
	.string	"|B"
.LC8:
	.string	"|X"
.LC9:
	.string	"|\333"
	.text
	.globl	_Z7showMapiPib
	.type	_Z7showMapiPib, @function
_Z7showMapiPib:
.LFB1453:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	%edx, %eax
	movb	%al, -24(%rbp)
	movl	$0, -4(%rbp)
.L19:
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	addl	$3, %eax
	cmpl	-4(%rbp), %eax
	jle	.L18
	movl	$-37, %edi
	call	putchar
	addl	$1, -4(%rbp)
	jmp	.L19
.L18:
	movl	$10, %edi
	call	putchar
	movl	$-37, %edi
	call	putchar
	movl	$0, -8(%rbp)
.L32:
	movl	-8(%rbp), %eax
	cmpl	-20(%rbp), %eax
	jge	.L20
	cmpb	$0, -24(%rbp)
	je	.L21
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	je	.L23
	cmpl	$1, %eax
	jg	.L24
	testl	%eax, %eax
	je	.L25
	jmp	.L22
.L24:
	cmpl	$2, %eax
	je	.L26
	cmpl	$3, %eax
	je	.L27
	jmp	.L22
.L25:
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	jmp	.L29
.L23:
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	jmp	.L29
.L26:
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	jmp	.L29
.L27:
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L29
.L22:
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	nop
	jmp	.L29
.L21:
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$3, %eax
	jne	.L36
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	jmp	.L29
.L36:
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	nop
.L29:
	addl	$1, -8(%rbp)
	jmp	.L32
.L20:
	movl	$.LC9, %edi
	call	puts
	movl	$0, -12(%rbp)
.L34:
	movl	-20(%rbp), %eax
	addl	%eax, %eax
	addl	$3, %eax
	cmpl	-12(%rbp), %eax
	jle	.L33
	movl	$-37, %edi
	call	putchar
	addl	$1, -12(%rbp)
	jmp	.L34
.L33:
	movl	$10, %edi
	call	putchar
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1453:
	.size	_Z7showMapiPib, .-_Z7showMapiPib
	.section	.rodata
.LC10:
	.string	"not within 0 and "
	.text
	.globl	_Z14testIfApprovedii
	.type	_Z14testIfApprovedii, @function
_Z14testIfApprovedii:
.LFB1454:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movb	$1, -1(%rbp)
.L41:
	cmpb	$0, -1(%rbp)
	je	.L38
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	jns	.L39
	movl	-24(%rbp), %eax
	leal	-1(%rax), %edx
	movl	-20(%rbp), %eax
	cmpl	%eax, %edx
	jg	.L39
	movl	$.LC10, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-24(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	jmp	.L40
.L39:
	movb	$0, -1(%rbp)
.L40:
	jmp	.L41
.L38:
	call	_Z5clearv
	movl	-20(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1454:
	.size	_Z14testIfApprovedii, .-_Z14testIfApprovedii
	.globl	_Z9testIfHitiiPi
	.type	_Z9testIfHitiiPi, @function
_Z9testIfHitiiPi:
.LFB1455:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movq	%rdx, -32(%rbp)
	movl	$0, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-24(%rbp), %eax
	jge	.L44
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$1, %eax
	je	.L45
	movl	-20(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-32(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	cmpl	$2, %eax
	jne	.L46
.L45:
	movl	$1, %eax
	jmp	.L47
.L46:
	movl	$0, %eax
	jmp	.L47
.L44:
	movl	$0, %eax
.L47:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1455:
	.size	_Z9testIfHitiiPi, .-_Z9testIfHitiiPi
	.section	.rodata
.LC11:
	.string	"Player "
.LC12:
	.string	" deploy all "
.LC13:
	.string	" boats on the board"
.LC14:
	.string	"Place: "
.LC15:
	.string	"(Player "
.LC16:
	.string	")"
.LC17:
	.string	"Boats left: "
	.text
	.globl	_Z9plaseBotsiiiPi
	.type	_Z9plaseBotsiiiPi, @function
_Z9plaseBotsiiiPi:
.LFB1456:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movl	%edi, -36(%rbp)
	movl	%esi, -40(%rbp)
	movl	%edx, -44(%rbp)
	movq	%rcx, -56(%rbp)
	movl	$0, -20(%rbp)
	movl	$0, -28(%rbp)
	call	_Z5clearv
	cmpl	$1, -44(%rbp)
	jne	.L49
	movl	$1, -20(%rbp)
	jmp	.L50
.L49:
	movl	$2, -20(%rbp)
.L50:
	movl	$.LC11, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC12, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC13, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-56(%rbp), %rcx
	movl	-36(%rbp), %eax
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	$0, -24(%rbp)
.L52:
	movl	-24(%rbp), %eax
	cmpl	-40(%rbp), %eax
	jge	.L51
	movl	$.LC14, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-28(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	-28(%rbp), %eax
	movl	-40(%rbp), %edx
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z14testIfApprovedii
	movl	-28(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-56(%rbp), %rax
	addq	%rax, %rdx
	movl	-20(%rbp), %eax
	movl	%eax, (%rdx)
	call	_Z5clearv
	movl	$.LC15, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-44(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC16, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-56(%rbp), %rcx
	movl	-36(%rbp), %eax
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	-40(%rbp), %eax
	subl	-24(%rbp), %eax
	leal	-1(%rax), %ebx
	movl	$.LC17, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, %esi
	movq	%rax, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	addl	$1, -24(%rbp)
	jmp	.L52
.L51:
	movl	-36(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-56(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1456:
	.size	_Z9plaseBotsiiiPi, .-_Z9plaseBotsiiiPi
	.section	.rodata
	.align 8
.LC18:
	.string	"How wide will the playing field be?"
.LC19:
	.string	"Wide: "
.LC20:
	.string	"How many boats?"
.LC21:
	.string	"Boats: "
.LC22:
	.string	""
.LC23:
	.string	"Player 1"
.LC24:
	.string	"Name: "
.LC25:
	.string	"Player 2"
.LC26:
	.string	"Player 1 HP: "
.LC27:
	.string	" Player 2 HP: "
.LC28:
	.string	" (Player 1)"
.LC29:
	.string	"HIT!!"
.LC30:
	.string	"Player 1 Boats: "
.LC31:
	.string	" Player 2 Boats: "
.LC32:
	.string	" (Player 2)"
.LC33:
	.string	"Player 1 win"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1457:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1457
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%r12
	pushq	%rbx
	subq	$208, %rsp
	.cfi_offset 12, -24
	.cfi_offset 3, -32
	movb	$1, -17(%rbp)
	movl	$1, -24(%rbp)
	movl	$5, -56(%rbp)
	movl	$3, -60(%rbp)
.LEHB0:
	call	_Z5clearv
	movl	$.LC18, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC19, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-56(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	$.LC20, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC21, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-60(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	-56(%rbp), %edx
	movl	-56(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z14testIfApprovedii
.LEHE0:
	leaq	-128(%rbp), %rax
	movl	$1, %ebx
	movq	%rax, %r12
.L56:
	testq	%rbx, %rbx
	js	.L55
	movq	%r12, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	addq	$32, %r12
	subq	$1, %rbx
	jmp	.L56
.L55:
	movl	-56(%rbp), %eax
	cltq
	movabsq	$2305843009213693950, %rdx
	cmpq	%rdx, %rax
	ja	.L57
	salq	$2, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Znam
	jmp	.L85
.L57:
	call	__cxa_throw_bad_array_new_length
.LEHE1:
.L85:
	movq	%rax, -40(%rbp)
	movl	$3, -28(%rbp)
	movl	$0, -132(%rbp)
	leaq	-50(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-50(%rbp), %rdx
	leaq	-176(%rbp), %rax
	movl	$.LC22, %esi
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE2:
	leaq	-50(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movl	-56(%rbp), %eax
	cltq
	movabsq	$2305843009213693950, %rdx
	cmpq	%rdx, %rax
	ja	.L59
	salq	$2, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Znam
	jmp	.L86
.L59:
	call	__cxa_throw_bad_array_new_length
.LEHE3:
.L86:
	movq	%rax, -48(%rbp)
	movl	$3, -32(%rbp)
	movl	$0, -180(%rbp)
	leaq	-49(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-49(%rbp), %rdx
	leaq	-224(%rbp), %rax
	movl	$.LC22, %esi
	movq	%rax, %rdi
.LEHB4:
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1EPKcRKS3_
.LEHE4:
	leaq	-49(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movl	$.LC23, %esi
	movl	$_ZSt4cout, %edi
.LEHB5:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC24, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-128(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	-60(%rbp), %esi
	movl	-56(%rbp), %eax
	movq	-40(%rbp), %rdx
	movq	%rdx, %rcx
	movl	$1, %edx
	movl	%eax, %edi
	call	_Z9plaseBotsiiiPi
	call	_Z5pausev
	call	_Z5clearv
	movl	$.LC25, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC24, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-128(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	-60(%rbp), %esi
	movl	-56(%rbp), %eax
	movq	-48(%rbp), %rdx
	movq	%rdx, %rcx
	movl	$2, %edx
	movl	%eax, %edi
	call	_Z9plaseBotsiiiPi
	call	_Z5pausev
	call	_Z5clearv
.L69:
	cmpb	$0, -17(%rbp)
	je	.L61
	cmpl	$1, -24(%rbp)
	jne	.L62
	call	_Z5clearv
	movl	$.LC26, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC27, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-176(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$.LC28, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	-56(%rbp), %eax
	movq	-48(%rbp), %rcx
	movl	$0, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	$.LC14, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-132(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	-56(%rbp), %edx
	movl	-132(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z14testIfApprovedii
	movl	-56(%rbp), %ecx
	movl	-132(%rbp), %eax
	movq	-48(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_Z9testIfHitiiPi
	xorl	$1, %eax
	testb	%al, %al
	je	.L63
	movl	$2, -24(%rbp)
	jmp	.L65
.L63:
	subl	$1, -32(%rbp)
	movl	-132(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	$3, (%rax)
	movl	$.LC29, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	call	_Z5pausev
	jmp	.L65
.L62:
	call	_Z5clearv
	movl	$.LC30, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-28(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$.LC31, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	movq	%rdx, %rdi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leaq	-224(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movl	$.LC32, %esi
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movq	-40(%rbp), %rax
	movl	$0, %edx
	movq	%rax, %rsi
	movl	$5, %edi
	call	_Z7showMapiPib
	movl	$.LC14, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leaq	-180(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt3cin, %edi
	call	_ZNSirsERi
	movl	-56(%rbp), %edx
	movl	-180(%rbp), %eax
	movl	%edx, %esi
	movl	%eax, %edi
	call	_Z14testIfApprovedii
	movl	-56(%rbp), %ecx
	movl	-180(%rbp), %eax
	movq	-40(%rbp), %rdx
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_Z9testIfHitiiPi
	xorl	$1, %eax
	testb	%al, %al
	je	.L66
	movl	$1, -24(%rbp)
	jmp	.L65
.L66:
	subl	$1, -28(%rbp)
	movl	-180(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-48(%rbp), %rax
	addq	%rdx, %rax
	movl	$3, (%rax)
	movl	$.LC29, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC0, %edi
	call	system
.L65:
	cmpl	$0, -32(%rbp)
	jne	.L67
	call	_Z5clearv
	movl	-56(%rbp), %eax
	movq	-40(%rbp), %rcx
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	-56(%rbp), %eax
	movq	-48(%rbp), %rcx
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	$.LC33, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	call	_Z5pausev
	movb	$0, -17(%rbp)
	jmp	.L69
.L67:
	cmpl	$0, -28(%rbp)
	jne	.L69
	movl	$.LC3, %edi
	call	system
	movl	-56(%rbp), %eax
	movq	-40(%rbp), %rcx
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	-56(%rbp), %eax
	movq	-48(%rbp), %rcx
	movl	$1, %edx
	movq	%rcx, %rsi
	movl	%eax, %edi
	call	_Z7showMapiPib
	movl	$.LC33, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$.LC0, %edi
	call	system
.LEHE5:
	movb	$0, -17(%rbp)
	jmp	.L69
.L61:
	movl	$0, %r12d
	leaq	-224(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-176(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	leaq	-128(%rbp), %rbx
	addq	$64, %rbx
.L71:
	leaq	-128(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L72
	subq	$32, %rbx
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L71
.L72:
	movl	%r12d, %eax
	jmp	.L87
.L81:
	movq	%rax, %rbx
	leaq	-50(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %r12
	jmp	.L74
.L83:
	movq	%rax, %rbx
	leaq	-49(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	jmp	.L76
.L84:
	movq	%rax, %rbx
	leaq	-224(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L76
.L82:
	movq	%rax, %rbx
.L76:
	leaq	-176(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %r12
	jmp	.L74
.L80:
	movq	%rax, %r12
.L74:
	leaq	-128(%rbp), %rbx
	addq	$64, %rbx
.L79:
	leaq	-128(%rbp), %rax
	cmpq	%rax, %rbx
	je	.L78
	subq	$32, %rbx
	movq	%rbx, %rdi
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	jmp	.L79
.L78:
	movq	%r12, %rax
	movq	%rax, %rdi
.LEHB6:
	call	_Unwind_Resume
.LEHE6:
.L87:
	addq	$208, %rsp
	popq	%rbx
	popq	%r12
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1457:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1457:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1457-.LLSDACSB1457
.LLSDACSB1457:
	.uleb128 .LEHB0-.LFB1457
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1457
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L80-.LFB1457
	.uleb128 0
	.uleb128 .LEHB2-.LFB1457
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L81-.LFB1457
	.uleb128 0
	.uleb128 .LEHB3-.LFB1457
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L82-.LFB1457
	.uleb128 0
	.uleb128 .LEHB4-.LFB1457
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L83-.LFB1457
	.uleb128 0
	.uleb128 .LEHB5-.LFB1457
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L84-.LFB1457
	.uleb128 0
	.uleb128 .LEHB6-.LFB1457
	.uleb128 .LEHE6-.LEHB6
	.uleb128 0
	.uleb128 0
.LLSDACSE1457:
	.text
	.size	main, .-main
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1908:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L90
	cmpl	$65535, -8(%rbp)
	jne	.L90
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L90:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1908:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I__Z7osProbev, @function
_GLOBAL__sub_I__Z7osProbev:
.LFB1909:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1909:
	.size	_GLOBAL__sub_I__Z7osProbev, .-_GLOBAL__sub_I__Z7osProbev
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z7osProbev
	.hidden	__dso_handle
	.ident	"GCC: (GNU) 6.2.1 20160830"
	.section	.note.GNU-stack,"",@progbits
