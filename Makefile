include .env

run:
	echo ${FILE_PATH}
	clang++ --std=c++11 ${FILE_PATH} && cat input.txt | ./a.out | tee output.txt
