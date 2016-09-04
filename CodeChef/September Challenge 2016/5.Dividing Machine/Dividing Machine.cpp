#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

const int N = 1e6 + 1;

typedef struct IntervalTree{
	int a;
	int b;
	int max;
	IntervalTree *lc;
	IntervalTree *rc;
}*Node, Tree;

int init(Node T, int a, int b, int al[], int lpd[])
{
	if(a == b){
		T->a = a;
		T->b = b;
		T->max = lpd[al[a]];
		return T->max;
	}
	else{
		Node lc = new Tree;
		Node rc = new Tree;
		int lmax = init(lc, a, (a + b) / 2, al, lpd);
		int rmax = init(rc, (a + b) / 2 + 1, b, al, lpd);
		T->max = lmax > rmax ? lmax : rmax;
		T->a = a;
		T->b = b;
		T->lc = lc;
		T->rc = rc;
		return T->max;
	}
}

//维护线段树
int update(Node T, int L, int R, int al[], int lpd[])
{
	if(T->max == 1){
		return 1;
	}
	else if(T->a > R || T->b < L){
		return T->max;
	}
	else if(T->a == T->b){
		al[T->a] /= lpd[al[T->a]];
		T->max = lpd[al[T->a]];
		return T->max;
	}
	else{
		int lmax = update(T->lc, L, R, al, lpd);
		int rmax = update(T->rc, L, R, al, lpd);
		T->max = lmax > rmax ? lmax : rmax;
		return T->max;
	}
}

//search
int get(Node T, int L, int R)
{
	if((T->a >= L) && (T->b <= R)){	//[a, b] in [L, R]
		return T->max;
	}
	else if((T->b < L) || (T->a > R)){
		return 0;
	}
	else{
		int lmax = 0, rmax = 0;
		if(T->lc != NULL)
			lmax = get(T->lc, L, R);
		if(T->rc != NULL)
			rmax = get(T->rc, L, R);
		int max = lmax > rmax ? lmax : rmax;
		return max;
	}
}

void printtree(Node T)
{
	cout << T->a << ' ' << T->b << ':' << T->max << endl;
	if(T->lc != NULL)
		printtree(T->lc);
	if(T->rc != NULL)
		printtree(T->rc);
}

int main()
{
	int t;
	cin >> t;

	vector<bool> able (N, true);
	int lpd[N];
	lpd[1] = 1;
	for(int i = 2; i != N; ++i){
		if(able[i]){// i is prime
			for(int j = 1; j * i < N; ++j){// i 的倍数, 不包括 i
				if(able[i * j]){
					able[i * j] = false;
					lpd[i * j] = i;
				}
			}
		}
	}

	while(t--){
		int n, m;
		cin >> n >> m;
		int al[n];
		int type, l, r;
		for(int i = 0; i != n; ++i){
			cin >> al[i];
		}
		//	Initialize interval tree
		Node T = new Tree;
		init(T, 0, n - 1, al, lpd);

		//printtree(T);

		for(int i = 0; i != m; ++i){
			cin >> type >> l >> r;
			--l;
			--r;
			if(type == 0){
				update(T, l, r, al, lpd);
				//cout << endl;
				//printtree(T);
			}
			else{
				cout << get(T, l, r) << endl;
			}
		}
	}
}

