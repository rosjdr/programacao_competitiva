#include <iostream>

using namespace std;

int main() {

    int k, n, m, x, y;
    scanf("%d", &k);
    while(k!=0){
        scanf("%d %d",&n,&m);
        for(int i=0;i<k;i++){
            scanf("%d %d",&x,&y);
            if(x>n && y>m) printf("NE\n");
            if(x==n || y==m) printf("divisa\n");
            if(x>n && y<m) printf("SE\n");
            if(x<n && y<m) printf("SO\n");
            if(x<n && y>m) printf("NO\n");
        }
        scanf("%d", &k);
    }

    return 0;
}