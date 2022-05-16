clang++ -Wall -Wextra -Werror -W -std=c++98 -g3 -fsanitize=address *.cpp -o start
./start
rm start