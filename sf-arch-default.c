/*
Copyright (c) 2014-2016 stoyan shopov

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "sf-cfg.h"
#include "sf-arch.h"

int sfgetc(void) __attribute__((weak));
int sffgetc(cell file_id) __attribute__((weak));
int sfputc(int c) __attribute__((weak));
int sfsync(void) __attribute__((weak));
cell sfopen(const char * pathname, int flags) __attribute__((weak));
int sfclose(cell file_id) __attribute__((weak));
int sffseek(cell stream, long offset) __attribute__((weak));

int sfgetc(void) { return EOF; }
int sffgetc(cell file_id) { return EOF; }
int sfputc(int c) { return EOF; }
int sfsync(void) { return EOF; }
cell sfopen(const char * pathname, int flags) { return 0; }
int sfclose(cell file_id) { return EOF; }
int sffseek(cell stream, long offset) { return -1; }
