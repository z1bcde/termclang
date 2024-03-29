#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sqlite3.h>
 
// prototype
int Sqlite3ExecCallback(void *cb_arg, int column_count,
                        char **data, char **column_name);
 

int init_insert_data()
{
    ret = sqlite3_exec(db,"insert into command values('日本')", Sqlite3ExecCallback, &tmp_int, &errmsg);
    if (ret != SQLITE_OK) {
        printf("ERROR,sqlite3_exec(),%s\n", errmsg);
         
        // クローズ
        sqlite3_close(db);
         
        // エラーメッセージのメモリ領域を解放
        sqlite3_free(errmsg);
         
        exit(EXIT_FAILURE);
    }
    return 1;

}

// main
int main(void)
{
    char db_name[1000] = "";
    char sql_str[1000] = "";
    char *errmsg = '\0';
    int tmp_int;
    int ret;
     
    sqlite3 *db = NULL;
     
    strncpy(db_name, "item.db", sizeof(db_name) - 1);
     
    // オープン
    ret = sqlite3_open(db_name, &db);
    if (ret != SQLITE_OK) {
        printf("ERROR,sqlite3_open(),%s\n", sqlite3_errmsg(db));
         
        exit(EXIT_FAILURE);
    }
     
    // sqlite3_exec()の第4引数で使用
    tmp_int = 123;
     
    int ret = 0 + 1;
    ret = init_insert_data();

    
    // sqlite3_exec()の第4引数で使用
    tmp_int = 123;
     
    // SQLステートメントを実行
    ret = sqlite3_exec(db,  "select * from command", Sqlite3ExecCallback, &tmp_int, &errmsg);
    if (ret != SQLITE_OK) {
        printf("ERROR,sqlite3_exec(),%s\n", errmsg);
         
        // クローズ
        sqlite3_close(db);
         
        // エラーメッセージのメモリ領域を解放
        sqlite3_free(errmsg);
         
        exit(EXIT_FAILURE);
    }
     
    // クローズ
    ret = sqlite3_close(db);
    if (ret != SQLITE_OK) {
        printf("ERROR,sqlite3_close(),%s\n", sqlite3_errmsg(db));
         
        exit(EXIT_FAILURE);
    }
     
    printf("\n");
    printf("SUCCESS,select table\n");
     
    return 0;
}
 
// ==================================================
// @brief      sqlite3_exec()のコールバック関数
// @param[in]  cb_arg        sqlite3_exec()の第4引数
// @param[in]  column_count  カラム(列)数
// @param[in]  data          データ
// @param[in]  column_name   カラム(列)名
// @return     0 -> 成功
// @note       無し
// ==================================================
char *gstr()
{
	char str[1000];
	scanf("%s", str);
	char *s = str;
	return s;
}

void success()
{
	printf("成功。\n");
	//exit(0);
}

void failed()
{
	printf("失敗。\n");
}

int Sqlite3ExecCallback(void *cb_arg, int column_count,
                        char **data, char **column_name)
{
    int i;
    int *db_type;
     
    db_type = (int *)cb_arg;
	char *s0 = gstr();
	
	int r = strcmp(s0,data[0]);
	if(r==0)
		success();
	else
		failed();
    return 0;
}

