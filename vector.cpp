////List
//#include<iostream>
//#include<list>
//using namespace std;
//
//main()
//{
//	list<int> L;
//	L.push_back(0);
//	L.push_front(10);
//	L.insert(++L.begin(),2);
//	
//	L.push_back(5);
//	L.push_back(6);
//	
//	list<int>::iterator i;
//	
//	for(i=L.begin();i !=L.end();++i)
//		cout<<*i<<" ";
//}
//List(advance)
#include<iostream>
#include<list>
using namespace std;

main()
{
	list<int> mylist;
	list<int>::iterator it1,it2;
	
	for(int i=1;i<10;++i)
		mylist.push_back(10*i);
		
	it1 = it2 = mylist.begin();
	advance(it2,6);
	++it1;
	
	it1 = mylist.erase(it1);
	
	it2 = mylist.erase(it2);
	
	mylist.erase(it1,it2);
	
	cout<<"mylist contains:";
	for(it1=mylist.begin();it1!=mylist.end();++it1)
		cout<<' '<<*it1;
	cout<<endl;
}


////Map(Hash Table)
//#include<iostream>
//#include<map>
//using namespace std;
//
//main()
//{
//	map <string,int> Employees;
//	
//	Employees["Neha"] = 5234;
//	Employees["Varun"] = 3374;
//	
//	Employees.insert(pair<string,int>("vikram",1923));
//	
//	Employees.insert(map<string,int>::value_type("Jhonny",7552));
//	
//	Employees.insert(make_pair(string("peter"),5328));
//	
//	cout<<"Map size: "<<Employees.size()<<endl;
//	
//	for(map<string,int>::iterator ii=Employees.begin();ii!=Employees.end();++ii)
//	{
//		cout<<(*ii).first<<": "<<(*ii).second<<endl;
//	}
//	
//	map<string,int>::iterator it;
//	it = Employees.find("Varun");
//	cout<<it -> second;
//}

////Stack
//#include<iostream>
//#include<stack>
//using namespace std;
//
//main()
//{
//	stack<int> myStack;
//	stack<char> myCharStack;
//	
//	for(int i=0;i<10;++i)
//		myStack.push(i);
//		
//	cout<<"Popping out...";
//	
//	while(!myStack.empty())
//	{
//		cout<<' '<<myStack.top();
//		myStack.pop();
//	}
//	cout<<endl;
//	
//	myCharStack.push('J');
//	myCharStack.push('O');
//	myCharStack.push('H');
//	myCharStack.push('N');
//	
//	cout<<" Reverse of JOHN"<<endl;
//	
//	while(!myCharStack.empty())
//	{
//		cout<<' '<<myCharStack.top();
//		myCharStack.pop();
//	}
//}

////Non-weighted graph
////Adjacency list representation using vector and lists
//
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//const int N = 4;
//
//main()
//{
//	vector <list<int> > adjList(N);
//	
//	adjList[0].push_back(1);
//	adjList[0].push_back(2);
//	
//	adjList[1].push_back(2);
//	adjList[1].push_back(0);
//	
//	adjList[2].push_back(0);
//	adjList[2].push_back(1);
//	adjList[2].push_back(3);
//	
//	adjList[3].push_back(2);
//	
//	vector <list<int> >::iterator i;
//	
//	int c=0;
//	for(vector <list<int> >::iterator i=adjList.begin();i != adjList.end();++i)
//	{
//		cout<<"Vertices connected to node "<<c<<" are ";
//		
//		list<int> li = *i;
//		for(list<int>::iterator iter = li.begin();iter!=li.end();++iter)
//		{
//			cout<<*iter<<" ";
//		}
//		cout<<endl;
//		c++;
//	}
//}

//Weighted graph
//Adjacency list representation using vector and lists
//#include<iostream>
//#include<vector>
//#include<list>
//using namespace std;
//
//const int N = 4;
//
//class edge
//{
//	private:
//		double wt;
//		int vertex_id;
//		
//	public:
//		edge(double w,int id)
//		{
//			wt = w;
//			vertex_id = id;
//		}
//		
//		double getWeight() const
//		{
//			return wt;
//		}
//		int getVertexId() const
//		{
//			return vertex_id;
//		}
//};
//
//main()
//{
//	vector <list<edge> > adjList(N);
//	
//	adjList[0].push_back(edge(4,1));
//	adjList[0].push_back(edge(2,2));
//	
//	adjList[1].push_back(edge(4,0));
//	adjList[1].push_back(edge(5,2));
//	
//	adjList[2].push_back(edge(2,0));
//	adjList[2].push_back(edge(5,1));
//	adjList[2].push_back(edge(1,3));
//	
//	adjList[3].push_back(edge(1,2));
//	
//	vector <list<edge> >::iterator i;
//	
//	int c=0;
//	for(vector <list<edge> >::iterator i=adjList.begin();i != adjList.end();++i)
//	{
//		cout<<"Vertices connected to node "<<c<<" are ";
//		
//		list<edge> li = *i;
//		for(list<edge>::iterator iter = li.begin();iter!=li.end();++iter)
//		{
//			cout<<"V= "<<(*iter).getVertexId()<<" wt= "<<(*iter).getWeight()<<") ";
//		}
//		cout<<endl;
//		c++;
//	}
//}
