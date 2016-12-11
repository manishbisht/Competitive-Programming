#include <cstdio>
#include <cstring>

using namespace std;

#define MAX_SIZE 3
const long long MOD = 1000000007;
int size = 3;

struct Matrix{
    long long X[MAX_SIZE][MAX_SIZE];

    Matrix(){}

    void init(){
        memset(X,0,sizeof(X));
        for(int i = 0;i<size;++i) X[i][i] = 1;
    }
}aux,M0,ans;

void mult(Matrix &m, Matrix &m1, Matrix &m2){
    memset(m.X,0,sizeof(m.X));

    for(int i = 0;i<size;++i)
        for(int j = 0;j<size;++j)
            for(int k = 0;k<size;++k)
                m.X[i][k] = (m.X[i][k]+m1.X[i][j]*m2.X[j][k])%MOD;
}

Matrix pow(Matrix &M0, int n){
	Matrix ret;
	ret.init();

	if(n==0) return ret;
	if(n==1) return M0;

	Matrix P = M0;

	while(n!=0){
	    if(n & 1){
	        aux = ret;
	        mult(ret,aux,P);
	    }

	    n >>= 1;

	    aux = P;
	    mult(P,aux,aux);
	}

    return ret;
}

long long sum(int n){
    if(n<=0) return 0;
    if(n==1) return 1;

    ans = pow(M0,n-1);
    return (ans.X[0][0]+ans.X[0][1])%MOD;
}

int main(){
    M0.X[0][0] = 1; M0.X[0][1] = 1; M0.X[0][2] = 1;
    M0.X[1][0] = 0; M0.X[1][1] = 1; M0.X[1][2] = 1;
    M0.X[2][0] = 0; M0.X[2][1] = 1; M0.X[2][2] = 0;

    int T,N,M;

    scanf("%d",&T);

    while(T--){
        scanf("%d %d",&N,&M);
        printf("%lld\n",((sum(M)-sum(N-1))%MOD+MOD)%MOD);
    }

    return 0;
}
