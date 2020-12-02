// Node structure
struct Node{
    ll max=0; // Change according to function
    ll min=1e9+7;
    ll sum=0;
    Node(ll mx, ll mn, ll sm): max(mx), min(mn), sum(sm){}
    Node(ll x): max(x), min(x), sum(x){}
    Node(): max(0), min(1e9+7), sum(0){}
};

struct ST{
    ll N;
    vector<Node> st, lazy;
    vector<bool> clazy;
    Node ret;

    ST(ll n): N(n), st(4*n+10),lazy(4*n+10),clazy(4*n+10,false){}

    //Assignment
    void assign(ll n){
        N=n;
        st.resize(4*n+10);
        lazy.resize(4*n+10);
        clazy.assign(4*n+10,false);
        ret.max=0; //  Change according to function
        ret.min=1e9+7;
        ret.sum=0;
    }

    // All merging functions
    void merge(Node &cur, Node &l, Node &r){
        cur.max = max(l.max , r.max);  // Change according to function
        cur.min = min(l.min , r.min);
        cur.sum = l.sum + r.sum;
    }

    void assignNode(ll node, ll val){
        st[node].max = val;
        st[node].min = val;
        st[node].sum = val;
    }

    void assignLazy(ll node, ll val){
        lazy[node].max = val; // Change according to function
        lazy[node].min = val;
        lazy[node].sum = val;
    }


    //Propogation in lazy-update
    void propogate(ll node, ll l, ll r){
        if(!clazy[node]) return;
        clazy[node]=false;
        st[node].max = lazy[node].max; // Change according to function
        st[node].min = lazy[node].min;
        st[node].sum += (r-l)*lazy[node].sum;
        if(r-l>=2){
            clazy[2*node]=true;
            clazy[2*node+1]=true;
            lazy[2*node].max = lazy[node].max;
            lazy[2*node+1].max = lazy[node].max; // Change according to function

            lazy[2*node].min = lazy[node].min;
            lazy[2*node+1].min = lazy[node].min;

            lazy[2*node].sum += lazy[node].sum;
            lazy[2*node+1].sum += lazy[node].sum;

        }
        lazy[node] = ret;
    }

    void build(ll node, ll l , ll r, vll & a){
        if(r-l<2){
            assignNode(node,a[l]);
            return;
        }
        ll mid = (l+r)/2;
        build(2*node,l,mid,a);
        build(2*node+1,mid,r,a);
        merge(st[node], st[2*node], st[2*node+1]);
    }

    void build(ll node, ll l, ll r){
        st[node]=ret;
        if(r-l<2){
            return;
        }
        ll mid = (l+r)/2;
        build(2*node,l,mid);
        build(2*node+1,mid,r);
    }

    Node Query(ll node, ll l, ll r, ll x, ll y){
        propogate(node,l,r);
        if(x>=r or y<=l) return ret; // Change according to function
        if(x<=l and y>=r) return st[node];
        ll mid = (l+r)/2;
        Node L = Query(2*node,l,mid,x,y);
        Node R = Query(2*node+1,mid,r,x,y);
        Node C;
        merge(C,L,R);
        return C;
    }

    Node pQuery(ll node, ll l, ll r, ll pos){
        propogate(node,l,r);
        if(r-l<2) return st[node];
        ll mid = (l+r)/2;
        if(pos<mid) return pQuery(2*node,l,mid,pos);
        else return pQuery(2*node+1,mid,r,pos);
    }

    void Update(ll node, ll l, ll r, ll x, ll y, ll val){
        propogate(node,l,r);
        if(x>=r or y<=l) return;
        if(x<=l and y>=r){
            clazy[node]=1;
            assignLazy(node,val);
            propogate(node,l,r);
            return;
        }
        ll mid = (l+r)/2;
        Update(2*node,l,mid,x,y,val);
        Update(2*node+1,mid,r,x,y,val);
        merge(st[node], st[2*node], st[2*node+1]);
    }

    void pUpdate(ll node, ll l, ll r, ll pos, ll val){
        propogate(node,l,r);
        if(r-l<2){
            assignNode(node,val);
            return;
        }
        ll mid = (l+r)/2;
        if(pos<mid) pUpdate(2*node,l,mid,pos,val);
        else pUpdate(2*node+1,mid,r,pos,val);
        merge(st[node],st[2*node],st[2*node+1]);
    }

    Node query(ll pos){
        return pQuery(1, 0, N, pos);
    }

    Node query(ll L, ll R){
        if(L>=R) return ret;
        return Query(1, 0, N, L, R);
    }

    void update(ll pos, ll val){
        return pUpdate(1, 0, N, pos, val);
    }

    void update(ll L, ll R, ll val){
        if(L>=R) return ;
        return Update(1, 0, N, L, R, val);
    }
};
