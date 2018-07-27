	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 13
	.globl	_ft_putchar             ## -- Begin function ft_putchar
	.p2align	4, 0x90
_ft_putchar:                            ## @ft_putchar
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi0:
	.cfi_def_cfa_offset 16
Lcfi1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi2:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movb	%dil, %al
	movl	$1, %edi
	leaq	-1(%rbp), %rsi
	movl	$1, %ecx
	movl	%ecx, %edx
	movb	%al, -1(%rbp)
	callq	_write
	movq	%rax, -16(%rbp)         ## 8-byte Spill
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_ft_isspace             ## -- Begin function ft_isspace
	.p2align	4, 0x90
_ft_isspace:                            ## @ft_isspace
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi3:
	.cfi_def_cfa_offset 16
Lcfi4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi5:
	.cfi_def_cfa_register %rbp
	movb	%dil, %al
	movb	%al, -5(%rbp)
	movsbl	-5(%rbp), %edi
	cmpl	$9, %edi
	jl	LBB1_2
## BB#1:
	movsbl	-5(%rbp), %eax
	cmpl	$13, %eax
	jle	LBB1_3
LBB1_2:
	movsbl	-5(%rbp), %eax
	cmpl	$32, %eax
	jne	LBB1_4
LBB1_3:
	movl	$1, -4(%rbp)
	jmp	LBB1_5
LBB1_4:
	movl	$0, -4(%rbp)
LBB1_5:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_ft_isletter            ## -- Begin function ft_isletter
	.p2align	4, 0x90
_ft_isletter:                           ## @ft_isletter
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi6:
	.cfi_def_cfa_offset 16
Lcfi7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi8:
	.cfi_def_cfa_register %rbp
	movb	%dil, %al
	movb	%al, -5(%rbp)
	movsbl	-5(%rbp), %edi
	cmpl	$97, %edi
	jl	LBB2_3
## BB#1:
	movsbl	-5(%rbp), %eax
	cmpl	$122, %eax
	jg	LBB2_3
## BB#2:
	movl	$1, -4(%rbp)
	jmp	LBB2_8
LBB2_3:
	movsbl	-5(%rbp), %eax
	cmpl	$65, %eax
	jl	LBB2_6
## BB#4:
	movsbl	-5(%rbp), %eax
	cmpl	$90, %eax
	jg	LBB2_6
## BB#5:
	movl	$1, -4(%rbp)
	jmp	LBB2_8
LBB2_6:
	jmp	LBB2_7
LBB2_7:
	movl	$0, -4(%rbp)
LBB2_8:
	movl	-4(%rbp), %eax
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_ft_strlen              ## -- Begin function ft_strlen
	.p2align	4, 0x90
_ft_strlen:                             ## @ft_strlen
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi9:
	.cfi_def_cfa_offset 16
Lcfi10:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi11:
	.cfi_def_cfa_register %rbp
	movq	%rdi, -8(%rbp)
	movl	$0, -12(%rbp)
LBB3_1:                                 ## =>This Inner Loop Header: Depth=1
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	movl	%ecx, %edx
	addl	$1, %edx
	movl	%edx, -12(%rbp)
	movslq	%ecx, %rsi
	cmpb	$0, (%rax,%rsi)
	je	LBB3_3
## BB#2:                                ##   in Loop: Header=BB3_1 Depth=1
	jmp	LBB3_1
LBB3_3:
	movl	-12(%rbp), %eax
	addl	$-1, %eax
	movl	%eax, -12(%rbp)
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_ft_str_capitalizer     ## -- Begin function ft_str_capitalizer
	.p2align	4, 0x90
_ft_str_capitalizer:                    ## @ft_str_capitalizer
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi12:
	.cfi_def_cfa_offset 16
Lcfi13:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi14:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	$0, -12(%rbp)
	movq	-8(%rbp), %rdi
	callq	_ft_strlen
	movl	%eax, -16(%rbp)
LBB4_1:                                 ## =>This Loop Header: Depth=1
                                        ##     Child Loop BB4_3 Depth 2
                                        ##     Child Loop BB4_8 Depth 2
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jge	LBB4_25
## BB#2:                                ##   in Loop: Header=BB4_1 Depth=1
	jmp	LBB4_3
LBB4_3:                                 ##   Parent Loop BB4_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	xorl	%eax, %eax
	movb	%al, %cl
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	movb	%cl, -17(%rbp)          ## 1-byte Spill
	jge	LBB4_5
## BB#4:                                ##   in Loop: Header=BB4_3 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_isspace
	cmpl	$0, %eax
	setne	%dl
	movb	%dl, -17(%rbp)          ## 1-byte Spill
LBB4_5:                                 ##   in Loop: Header=BB4_3 Depth=2
	movb	-17(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_6
	jmp	LBB4_7
LBB4_6:                                 ##   in Loop: Header=BB4_3 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_putchar
	movl	-12(%rbp), %edi
	addl	$1, %edi
	movl	%edi, -12(%rbp)
	jmp	LBB4_3
LBB4_7:                                 ##   in Loop: Header=BB4_1 Depth=1
	jmp	LBB4_8
LBB4_8:                                 ##   Parent Loop BB4_1 Depth=1
                                        ## =>  This Inner Loop Header: Depth=2
	xorl	%eax, %eax
	movb	%al, %cl
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	movb	%cl, -18(%rbp)          ## 1-byte Spill
	jge	LBB4_10
## BB#9:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_isspace
	cmpl	$0, %eax
	setne	%dl
	xorb	$-1, %dl
	movb	%dl, -18(%rbp)          ## 1-byte Spill
LBB4_10:                                ##   in Loop: Header=BB4_8 Depth=2
	movb	-18(%rbp), %al          ## 1-byte Reload
	testb	$1, %al
	jne	LBB4_11
	jmp	LBB4_24
LBB4_11:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movl	-12(%rbp), %ecx
	subl	$1, %ecx
	movslq	%ecx, %rdx
	movsbl	(%rax,%rdx), %edi
	callq	_ft_isspace
	cmpl	$0, %eax
	jne	LBB4_13
## BB#12:                               ##   in Loop: Header=BB4_8 Depth=2
	cmpl	$0, -12(%rbp)
	jne	LBB4_18
LBB4_13:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_isletter
	cmpl	$0, %eax
	je	LBB4_16
## BB#14:                               ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$97, %edx
	jl	LBB4_16
## BB#15:                               ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	subl	$32, %edx
	movb	%dl, %sil
	movsbl	%sil, %edi
	callq	_ft_putchar
	jmp	LBB4_17
LBB4_16:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_putchar
LBB4_17:                                ##   in Loop: Header=BB4_8 Depth=2
	jmp	LBB4_23
LBB4_18:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_isletter
	cmpl	$0, %eax
	je	LBB4_21
## BB#19:                               ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	cmpl	$90, %edx
	jg	LBB4_21
## BB#20:                               ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edx
	addl	$32, %edx
	movb	%dl, %sil
	movsbl	%sil, %edi
	callq	_ft_putchar
	jmp	LBB4_22
LBB4_21:                                ##   in Loop: Header=BB4_8 Depth=2
	movq	-8(%rbp), %rax
	movslq	-12(%rbp), %rcx
	movsbl	(%rax,%rcx), %edi
	callq	_ft_putchar
LBB4_22:                                ##   in Loop: Header=BB4_8 Depth=2
	jmp	LBB4_23
LBB4_23:                                ##   in Loop: Header=BB4_8 Depth=2
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	LBB4_8
LBB4_24:                                ##   in Loop: Header=BB4_1 Depth=1
	jmp	LBB4_1
LBB4_25:
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.globl	_main                   ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Lcfi15:
	.cfi_def_cfa_offset 16
Lcfi16:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Lcfi17:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	%edi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movl	$0, -20(%rbp)
	cmpl	$1, -8(%rbp)
	jle	LBB5_5
## BB#1:
	jmp	LBB5_2
LBB5_2:                                 ## =>This Inner Loop Header: Depth=1
	movl	-20(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -20(%rbp)
	cmpl	-8(%rbp), %eax
	jge	LBB5_4
## BB#3:                                ##   in Loop: Header=BB5_2 Depth=1
	movq	-16(%rbp), %rax
	movslq	-20(%rbp), %rcx
	movq	(%rax,%rcx,8), %rdi
	callq	_ft_str_capitalizer
	movl	$10, %edi
	callq	_ft_putchar
	jmp	LBB5_2
LBB5_4:
	jmp	LBB5_5
LBB5_5:
	cmpl	$1, -8(%rbp)
	jne	LBB5_7
## BB#6:
	movl	$10, %edi
	callq	_ft_putchar
LBB5_7:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function

.subsections_via_symbols
