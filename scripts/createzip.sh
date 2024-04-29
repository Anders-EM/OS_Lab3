rm os_p3_100531523_100495775_100541510.zip
cp ../src/authors.txt authors.txt
cp ../src/Makefile Makefile
cp ../src/store_manager.c store_manager.c
cp ../src/queue.c queue.c
cp ../src/queue.h queue.h
cp ../src/authors.txt authors.txt


zip os_p3_100531523_100495775_100541510.zip Makefile store_manager.c queue.c queue.h authors.txt


rm Makefile
rm store_manager.c
rm queue.c
rm queue.h
rm authors.txt