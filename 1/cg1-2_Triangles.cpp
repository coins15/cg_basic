#include <GL/glut.h> // ライブラリ用ヘッダファイルの読み込み

#define rep(i,n) for(int i=0;i<n;++i)

// 表示部分をこの関数で記入
void display(void) {
    glClearColor(1.0, 1.0, 1.0, 1.0);  // 消去色指定
    glClear(GL_COLOR_BUFFER_BIT);      // 画面消去

    glColor3d(0.0, 0.0, 1.0);    //青色

    glBegin(GL_TRIANGLES);
    rep(i, 5) rep(j, 5) {
        glVertex2d(0.4 *  i      - 1.0, -1 + 0.4 * j);
        glVertex2d(0.4 * (i + 1) - 1.0, -1 + 0.4 * j);
        glVertex2d(0.4 * (i + 1) - 1.0, -1 + 0.4 * (j + 1));
    }
    glEnd();
    glFlush(); // 画面出力
}

// メインプログラム
int main(int argc, char *argv[]) {
    glutInit(&argc, argv);          // ライブラリの初期化
    glutInitWindowSize(400, 400);   // ウィンドウサイズを指定
    glutCreateWindow(argv[0]);      // ウィンドウを作成
    glutDisplayFunc(display);       // 表示関数を指定
    glutMainLoop();                 // イベント待ち
    return 0;
}