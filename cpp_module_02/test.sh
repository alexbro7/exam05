clang++ -Wall -Wextra -Werror -W -std=c++98 *.cpp -o start
./start
./start | cat -e > result.txt
diff result.txt expected.txt
rm start result.txt