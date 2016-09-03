CPPFLAGS = -I../

libOpenCL.a: icd.o icd_dispatch.o $(ICD_OS).o
	-$(RM) $@
	$(AR) rcs $@ $^

icd.o: icd.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

icd_dispatch.o: icd_dispatch.c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

$(ICD_OS).o: $(ICD_OS).c
	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@
