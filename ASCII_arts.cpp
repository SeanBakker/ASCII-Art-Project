/*
Sean Bakker
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
	string filename = "";
	
	cout << "Enter the filename: " << endl;
	cin >> filename;
	
	ifstream fin(filename.c_str());
	
	if (!fin)
	{
		cout << "File not found" << endl;
		return EXIT_FAILURE;
	}
	
	int rows = 0, rowNum = 0, columnNum = 0;
	const int MAX_ROWS = 200, MAX_WIDTH = 79;
	char character = ' ';
	
	char charArray[MAX_ROWS][MAX_WIDTH] = {};
	
	fin >> rows;
	
	while (fin >> rowNum >> columnNum >> character)
	{
		charArray[rowNum][columnNum] = character;
	}
	
	cout << endl;
	
	for (int countRow = 0; countRow < rows; countRow++)
	{
		for (int countColumn = 0; countColumn < MAX_WIDTH; countColumn++)
			cout << charArray[countRow][countColumn];
		
		if (countRow + 1 != rows)
			cout << endl;
	}
	
	fin.close();
	system("PAUSE");
	return EXIT_SUCCESS;
}
/*
homer_mapped.txt:

Enter the filename:
homer_mapped.txt

                             __
                   _ ,___,-'",-=-.
       __,-- _ _,-'_)_  (""`'-._\ `.
    _,'  __ |,' ,-' __)  ,-     /. |
  ,'_,--'   |     -'  _)/         `\
,','      ,'       ,-'_,`           :
,'     ,-'       ,(,-(              :
     ,'       ,-' ,    _            ;
    /        ,-._/`---'            /
   /        (____)(----. )       ,'
  /         (      `.__,     /\ /,
 :           ;-.___         /__\/|
 |         ,'      `--.      -,\ |
 :        /            \    .__/
  \      (__            \    |_
   \       ,`-, *       /   _|,\
    \    ,'   `-.     ,'_,-'    \
   (_\,-'    ,'\")--,'-'       __\
    \       /  // ,'|      ,--'  `-.
     `-.    `-/ \'  |   _,'         `.
        `-._ /      `--'/             \
-hrr-      ,'           |              \
          /             |               \
       ,-'              |               /
      /                 |             -'

mickey_mapped.txt:

Enter the filename:
mickey_mapped.txt

                            _____
                        .d88888888bo.
                      .d8888888888888b.
                      8888888888888888b
                      888888888888888888
                      888888888888888888
                       Y8888888888888888
                 ,od888888888888888888P
              .'`Y8P'```'Y8888888888P'
            .'_   `  _     'Y88888888b
           /  _`    _ `      Y88888888b   ____
        _  | /  \  /  \      8888888888.d888888b.
       d8b | | /|  | /|      8888888888d8888888888b
      8888_\ \_|/  \_|/      d888888888888888888888b
      .Y8P  `'-.            d88888888888888888888888
     /          `          `      `Y8888888888888888
     |                        __    888888888888888P
      \                       / `   dPY8888888888P'
       '._                  .'     .'  `Y888888P`
          `"'-.,__    ___.-'    .-'
         jgs  `-._````  __..--'`

st_basils_mapped.txt:

Enter the filename:
st_basils_mapped.txt

                            .
                            T
                           ( )
                          <===>
                           F|J
                           ===
                          J|||F
                          F|||J
                         /\/ \/\
                         F+++++J
                        J{}{|}{}F         .
                     .  F{}{|}{}J         T
          .          T J{}{}|{}{}F        ;;
          T         /|\F/\/\|/\/\J  .   ,;;;;.
         /:\      .'/|\\:=========F T ./;;;;;;\
       ./:/:/.   ///|||\\\"""""""" /x\T\;;;;;;/
      //:/:/:/\  \\\\|////..[ ]...xXXXx.|====|
      \:/:/:/:T7 :.:.:.:.:||[ ]|/xXXXXXx\|||||
      ::.:.:.:A. `;:;:;:;'=== ==\XXXXXXX/=====.
      `;""::/xxx\.|,|,|,| ( ) ( )| | | |.=..=.|
       :. :`\xxx/(_)(_)(_) _   _ | | | |'-''-'|
       :T-'-.:"":|"""""""|/ \ / \|=====|======|
       .A."""||_|| ,. .. || | | |/\/\/\/ | | ||
   :;:////\:::.'.| || || ||-| |-|/\/\/\+|+| | |
  ;:;;\////::::,='======='=============/\/\=====.
 :;:::;""":::::;:|__..,__|============/||\|\====|
 :::::;|=:::;:;::|,;:::::          |========|   |
 ::l42::::::(}:::::;::::::_________|========|___|__

*/
