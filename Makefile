stackorder:stackorder.c
	gcc $@ -o $^

.PHONY:clean
	clean:
		rm -f stackorder
