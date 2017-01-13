-------- PROJECT GENERATOR --------
PROJECT NAME :	Pacman
PROJECT DIRECTORY :	C:\WorkSpace\Pacman\Pacman
CPU SERIES :	SH-2
CPU TYPE :	SH7085
TOOLCHAIN NAME :	Renesas SuperH RISC engine Standard Toolchain
TOOLCHAIN VERSION :	9.4.3.0
GENERATION FILES :
    C:\WorkSpace\Pacman\Pacman\dbsct.c
        Setting of B,R Section
    C:\WorkSpace\Pacman\Pacman\typedefine.h
        Aliases of Integer Type
    C:\WorkSpace\Pacman\Pacman\sbrk.c
        Program of sbrk
    C:\WorkSpace\Pacman\Pacman\iodefine.h
        Definition of I/O Register
    C:\WorkSpace\Pacman\Pacman\intprg.c
        Interrupt Program
    C:\WorkSpace\Pacman\Pacman\vecttbl.c
        Initialize of Vector Table
    C:\WorkSpace\Pacman\Pacman\vect.h
        Definition of Vector
    C:\WorkSpace\Pacman\Pacman\resetprg.c
        Reset Program
    C:\WorkSpace\Pacman\Pacman\hwsetup.c
        Hardware Setup file
    C:\WorkSpace\Pacman\Pacman\Pacman.c
        Main Program
    C:\WorkSpace\Pacman\Pacman\sbrk.h
        Header file of sbrk file
    C:\WorkSpace\Pacman\Pacman\stacksct.h
        Setting of Stack area
START ADDRESS OF SECTION :
 H'000000000	DVECTTBL,DINTTBL,PIntPRG
 H'000000800	PResetPRG
 H'000001000	P,C,C$BSEC,C$DSEC,D
 H'0FFFF4000	B,R
 H'0FFFFBC00	S

* When the user program is executed,
* the interrupt mask has been masked.
* 
* Program start H'1000.
* RAM start H'FFFF4000.

DATE & TIME : 2017/01/13 10:38:33
