    #include <iostream>
    #include <vector>

    using namespace std;

    struct Node{
        bool check = true;
        vector<int> connect_node;
    };

    Node* node;

    void search_node(int number)
    {
        if(node[number].check)
        {
            node[number].check = false;

            for(int i=0;i<node[number].connect_node.size();i++)
            {
                search_node(node[number].connect_node[i]);
            }
        }
    }

    int main()
    {
        int n, m;

        cin >> n >> m;

        node = new Node[n+1];

        for(int i=0;i<m;i++)
        {
            int a, b;
            cin >> a >> b;

            node[a].connect_node.push_back(b);
            node[b].connect_node.push_back(a);
        }

        int count = 0;

        for(int i=1;i<=n;i++)
        {
            if(node[i].check)
            {
                count++;
                search_node(i);
            }
        }

        cout << count;
    }