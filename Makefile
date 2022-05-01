CC := cc
OUT := out
CFLAGS = -Ofast -pipe
all: create ls cat mkdir true false whoami uname yes kill echo sleep pwd
create:
	mkdir -p $(OUT)
ls:
	$(CC) $(CFLAGS) ls.c -o  $(OUT)/ls
cat:
	$(CC) $(CFLAGS) cat.c -o $(OUT)/cat
mkdir:
	$(CC) $(CFLAGS) mkdir.c -o $(OUT)/mkdir
true:
	$(CC) $(CFLAGS) true.c -o $(OUT)/true
false:
	$(CC) $(CFLAGS) false.c -o $(OUT)/false
whoami:
	$(CC) $(CFLAGS) whoami.c -o $(OUT)/whoami
uname:
	$(CC) $(CFLAGS) uname.c -o $(OUT)/uname
yes:
	$(CC) $(CFLAGS) yes.c -o $(OUT)/yes
kill:
	$(CC) $(CFLAGS) kill.c -o $(OUT)/kill
echo:
	$(CC) $(CFLAGS) echo.c -o $(OUT)/echo
sleep:
	$(CC) $(CFLAGS) sleep.c -o $(OUT)/sleep
pwd:
	$(CC) $(CFLAGS) pwd.c -o $(OUT)/pwd
