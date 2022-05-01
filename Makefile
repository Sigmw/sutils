CC := cc
OUT := out
FLAGS = -Ofast -pipe
all: create ls cat mkdir true false whoami uname yes kill echo sleep
create:
	mkdir -p $(OUT)
ls:
	$(CC) $(FLAGS) ls.c -o  $(OUT)/ls
cat:
	$(CC) $(FLAGS) cat.c -o $(OUT)/cat
mkdir:
	$(CC) $(FLAGS) mkdir.c -o $(OUT)/mkdir
true:
	$(CC) $(FLAGS) true.c -o $(OUT)/true
false:
	$(CC) $(FLAGS) false.c -o $(OUT)/false
whoami:
	$(CC) $(FLAGS) whoami.c -o $(OUT)/whoami
uname:
	$(CC) $(FLAGS) uname.c -o $(OUT)/uname
yes:
	$(CC) $(FLAGS) yes.c -o $(OUT)/yes
kill:
	$(CC) $(FLAGS) kill.c -o $(OUT)/kill
echo:
	$(CC) $(FLAGS) echo.c -o $(OUT)/echo
sleep:
	$(CC) $(FLAGS) sleep.c -o $(OUT)/sleep
