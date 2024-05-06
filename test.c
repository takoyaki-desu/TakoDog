#include <stdio.h>
#include <curses.h>	/* curses */
#include <unistd.h>	/* sleep */

/* 表示位置 */
#define DISP_ROW	2
#define DISP_CLM	5

/* テキストアート */
#define TEXTART_ROW	16
#define TEXTART_CLM	37

char textart[TEXTART_ROW][TEXTART_CLM] = {
{"         _nnnn_                      "},
{"        dGGGGMMb     ,.............. "},
{"       @p~qp~~qMb    | Linux Rules! |"},
{"       M|@||@) M|   _;..............'"},
{"       @,----.JM| -'                 "},
{"      JS^\\__/  qKL                   "},
{"     dZP        qKRb                 "},
{"    dZP          qKKb                "},
{"   fZP            SMMb               "},
{"   HZM            MMMM               "},
{"   FqM            MMMM               "},
{" __| \".        |\\dS\"qML              "},
{" |    `.       | `'\\Zq               "},
{"_)      \\.___.,|     .'              "},
{"\\____   )MMMMMM|   .'                "},
{"     `-'       `--' hjm              "}
};

/* メイン処理 */
int main(int argc, char *argv[])
{
	int i;

	initscr();	/* スクリーンを初期化する */
	curs_set(0);	/* カーソル非表示 */
	
	/* 端末の上から2行目、左から5文字目から描画 */
	for( i=0; i < TEXTART_ROW ; i++ ){
		mvprintw(DISP_ROW + i, DISP_CLM, "%.37s", textart[i] );
	}
	
	refresh();	/* リフレッシュして表示 */
	sleep(5);	/* 5秒まち */

	endwin();	/* cursesの終了処理 */
}
/*引用*/
/*https://shuichi2525.hateblo.jp/entry/2024/03/06/235535*/
