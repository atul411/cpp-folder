#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define null nullptr
const double pie = 3.1415926535897932384626;
const ll inf = 1e+15; // Very big number
const ll mod = (1e+9)+7;
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define trav(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vvll vector<vll>
#define vf vector<float>
#define vvf vector<vector<float>>
#define vd vector<double>
#define vvd vector<vd>
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a%mod*b%mod)%mod)/gcd(a%mod,b%mod)
#define pi pair<int, int>
#define vs vector<string>
#define umap unordered_map<int, int>
#define pll pair<ll, ll>
#define mp map<int, int>
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define sum(a)  accumulate(all(a),0.0)
#define pqdi priority_queue<int>
#define pqii priority_queue<int, vector<int>, greater<int>>
/*template<typename T>          // making a vector/string unique
T unique(T a)
{
	T b = a;
	sort(b.begin(), b.end());
	auto lost = unique(b.begin(), b.end());
	b.erase(lost, b.end());
	return b;
}*/

/*/===========================                        string functions start

string UpperCase(string str)    //converting a string into lower cases
{
	string p = str;
	for(char &c : p)
		c = toupper(c);
	return p;
}

string LowerCase(string str)  // converting a string into lower case
{
	string s = str;
	for(char &c : s)
		c = tolower(c);
	return s;
}

string CamelCase(string str)
{
	string a;
	for(int i=0; i<str.size(); i++)
	{
		if(i==0||str[i-1]==' ')
		{
			a += toupper(str[i]);
		}
		else
		{
			a += tolower(str[i]);
		}
	}
	return a;
}
string join(vs a)     // conversion of words vector into string
{
	string s;
	int n = a.size();
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			s += a[i];
			continue;
		}
		s += " " + a[i];
	}
	return s;
}

vs split(string str) // conversion of string into vector of words
{
	int n = str.size();
	vs vect;
	if(n==0)
		return vect;
	string a = "";
	for(int i=0; i<n; i++)
	{
		if(str[i] != ' ')
			a.push_back(str[i]);
		if(str[i]==' '|| i==n-1)
		{
			vect.push_back(a);
			a.clear();
		}
	}
	return vect;
}

//===========================                      string functions end*/
/*/===========================                        tree functions start
class Node                                     // making node class
{
	public:
    	int val;
    	Node *left, *right;
};

Node* newNode(int x)                          // making new node
{
	Node* temp = new Node;
	temp->val = x;
	temp->left = temp->right = null;
	return temp;
}

void inorder(Node* root, vi &a)                 // inorder traversal
{
	if(root==null)
		return;
	inorder(root->left, a);
	a.push_back(root->val);
	inorder(root->right, a);
}
void preorder(Node* root, vi &a)             // preorder traversal
{
	if(root==null)
		return;
	a.push_back(root->val);
	preorder(root->left, a);
	preorder(root->right, a);
}
void postorder(Node* root, vi &a)            // postorder traversal
{
	if(root==null)
		return;
	postorder(root->left, a);
	postorder(root->right, a);
	a.push_back(root->val);
}

Node* mirror(Node* root)
{
	if(root==null)
		return root;
	auto a = root->left;
	root->left = root->right;
	root->right = a;
	mirror(root->left);
	mirror(root->right);
	return root;
}
int height(Node* root)                   // height of tree
{
	if(root==null)
		return 0;
	return max(height(root->left), height(root->right))+1;
}*/

/*/=============================                        Graph function start 
class Graph 
{
	private:
		int V; 
	    list<int> *adj;
	public: 
		Graph(int V);
		void addEdge(int v, int w, bool x); 
		void bfs(int s); 
}; 
Graph::	Graph(int x) 
{
	this->V = x; 
	this->adj = new list<int>[V]; 
} 
void Graph::addEdge(int v, int w, bool x = false) 
{ 
	adj[v].push_back(w);  
	if(x)
		adj[w].push_back(v);
} 

void Graph::bfs(int s) 
{ 
	bool *visited = new bool[V]; 
	for(int i = 0; i < V; i++) 
		visited[i] = false; 
	list<int> queue; 
	visited[s] = true; 
	queue.push_back(s); 
	list<int>::iterator i; 
	while(!queue.empty()) 
	{ 
		s = queue.front(); 
		cout << s << " "; 
		queue.pop_front(); 
		for (i = adj[s].begin(); i != adj[s].end(); ++i) 
		{ 
			if (!visited[*i]) 
			{ 
				visited[*i] = true; 
				queue.push_back(*i); 
			} 
		} 
	} 
}*/

// =====================================================
// =====================================================

int main()
{
	int x; 
	cout<<"enter the number :";
	cin>>x;
	int a[10][x];
	for(int i=1; i<11; i++)
	{
		for(int j=1; j<=x; j++)
		{
			a[i-1][j-1] = i*j;
		}
	}
	for(int i=1; i<11; i++)
	{
		for(int j=1; j<=x; j++)
		{
			cout<<a[i-1][j-1]<<"\t";
		}
		cout<<endl;
	}
	
}








