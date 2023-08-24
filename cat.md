==54465== Memcheck, a memory error detector
==54465== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==54465== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==54465== Command: ./monty bytecodes/000.m
==54465== 
==54465== Invalid write of size 1
==54465==    at 0x484FF93: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid write of size 1
==54465==    at 0x48DB364: getdelim (iogetdelim.c:118)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86267 is 7 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x49043EC: strtok_r (strtok_r.c:49)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853D76: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4904400: strtok_r (strtok_r.c:57)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853C8B: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853CCC: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4904416: strtok_r (strtok_r.c:65)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86264 is 4 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid write of size 1
==54465==    at 0x490441B: strtok_r (strtok_r.c:72)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86264 is 4 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094B9: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094B9: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4904443: strtok_r (strtok_r.c:47)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853D76: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4904400: strtok_r (strtok_r.c:57)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853C8B: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853CCC: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4904416: strtok_r (strtok_r.c:65)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid write of size 1
==54465==    at 0x490441B: strtok_r (strtok_r.c:72)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x1092C7: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x109322: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x1092E0: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x1092EB: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x10930B: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid free() / delete / delete[] / realloc()
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid write of size 2
==54465==    at 0x484FF63: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853DB9: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid write of size 8
==54465==    at 0x484FF10: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid read of size 1
==54465==    at 0x4853DB9: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a8626c is 12 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== Invalid free() / delete / delete[] / realloc()
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1093E7: free_memory (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095F4: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== HEAP SUMMARY:
==54465==     in use at exit: 144 bytes in 6 blocks
==54465==   total heap usage: 11 allocs, 14 frees, 5,880 bytes allocated
==54465== 
==54465== 120 bytes in 5 blocks are indirectly lost in loss record 1 of 2
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x109390: create_node (in /home/destiny/alx/monty/monty)
==54465==    by 0x109765: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 144 (24 direct, 120 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x109390: create_node (in /home/destiny/alx/monty/monty)
==54465==    by 0x109765: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== LEAK SUMMARY:
==54465==    definitely lost: 24 bytes in 1 blocks
==54465==    indirectly lost: 120 bytes in 5 blocks
==54465==      possibly lost: 0 bytes in 0 blocks
==54465==    still reachable: 0 bytes in 0 blocks
==54465==         suppressed: 0 bytes in 0 blocks
==54465== 
==54465== ERROR SUMMARY: 335 errors from 30 contexts (suppressed: 0 from 0)
==54465== 
==54465== 1 errors in context 1 of 30:
==54465== Invalid free() / delete / delete[] / realloc()
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1093E7: free_memory (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095F4: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 3 errors in context 2 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853DB9: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a8626c is 12 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 3 errors in context 3 of 30:
==54465== Invalid write of size 8
==54465==    at 0x484FF10: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 4 of 30:
==54465== Invalid read of size 1
==54465==    at 0x10930B: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 5 of 30:
==54465== Invalid read of size 1
==54465==    at 0x1092EB: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 6 of 30:
==54465== Invalid read of size 1
==54465==    at 0x1092E0: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 7 of 30:
==54465== Invalid read of size 1
==54465==    at 0x1092C7: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 8 of 30:
==54465== Invalid write of size 1
==54465==    at 0x490441B: strtok_r (strtok_r.c:72)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 9 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4904416: strtok_r (strtok_r.c:65)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 10 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853CCC: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86266 is 6 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 11 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853C8B: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 12 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4904400: strtok_r (strtok_r.c:57)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 13 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853D76: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 6 errors in context 14 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4904443: strtok_r (strtok_r.c:47)
==54465==    by 0x1096F0: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 15 of 30:
==54465== Invalid free() / delete / delete[] / realloc()
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 16 of 30:
==54465== Invalid write of size 1
==54465==    at 0x490441B: strtok_r (strtok_r.c:72)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86264 is 4 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 17 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4904416: strtok_r (strtok_r.c:65)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86264 is 4 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 18 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853C8B: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 19 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4904400: strtok_r (strtok_r.c:57)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 20 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853D76: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 21 of 30:
==54465== Invalid read of size 1
==54465==    at 0x49043EC: strtok_r (strtok_r.c:49)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 8 errors in context 22 of 30:
==54465== Invalid write of size 1
==54465==    at 0x48DB364: getdelim (iogetdelim.c:118)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86267 is 7 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 10 errors in context 23 of 30:
==54465== Invalid read of size 1
==54465==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094B9: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 12 errors in context 24 of 30:
==54465== Invalid read of size 1
==54465==    at 0x109322: _atoi (in /home/destiny/alx/monty/monty)
==54465==    by 0x109700: push (in /home/destiny/alx/monty/monty)
==54465==    by 0x1094E3: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86265 is 5 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 31 errors in context 25 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853DB9: strspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x49043FB: strtok_r (strtok_r.c:56)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 32 errors in context 26 of 30:
==54465== Invalid read of size 1
==54465==    at 0x4853CCC: strcspn (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x4904411: strtok_r (strtok_r.c:64)
==54465==    by 0x109479: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 34 errors in context 27 of 30:
==54465== Invalid read of size 1
==54465==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094B9: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86261 is 1 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 34 errors in context 28 of 30:
==54465== Invalid write of size 1
==54465==    at 0x484FF93: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== 
==54465== 44 errors in context 29 of 30:
==54465== Invalid write of size 2
==54465==    at 0x484FF63: memcpy@GLIBC_2.2.5 (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB22C: getdelim (iogetdelim.c:111)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465==  Address 0x4a86260 is 0 bytes inside a block of size 120 free'd
==54465==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x1094F2: interpret_line (in /home/destiny/alx/monty/monty)
==54465==    by 0x1095C3: main (in /home/destiny/alx/monty/monty)
==54465==  Block was alloc'd at
==54465==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==54465==    by 0x48DB1A2: getdelim (iogetdelim.c:62)
==54465==    by 0x1095DD: main (in /home/destiny/alx/monty/monty)
==54465== 
==54465== ERROR SUMMARY: 335 errors from 30 contexts (suppressed: 0 from 0)
