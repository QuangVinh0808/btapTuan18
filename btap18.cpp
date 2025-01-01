#include <iostream>

using namespace std;
int a[1005][1005];
int n, m;
/*
 Để nhập đồ thị như bài a, b, c, d, e, f, g thì hãy nhập
7 11
1 2
1 3
1 4
2 5
4 5
4 6
5 3
5 6
5 7
7 2
7 5
*/
int main()
{
    cout << "Nhap so dinh : ";
    cin >> n;
    cout << "Nhap so canh : ";
    cin >> m;

    for(int i = 1; i <= m ; i++){
        int x, y; cin >> x >> y; //Stt cua 2 dinh noi voi nhau
        a[x][y] = 1;
    }

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}