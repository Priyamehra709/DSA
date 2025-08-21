/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return nullptr;

        unordered_map<Node*, Node*> visited;
        return clone_node(node, visited);
    }

    Node* clone_node(Node* node, unordered_map<Node*, Node*>& visited) {
        // If already cloned, return that
        if (visited.find(node) != visited.end()) {
            return visited[node];
        }

        // Create a new node
        Node* new_node = new Node(node->val);
        visited[node] = new_node;

        // Clone neighbors
        for (Node* neighbor : node->neighbors) {
            new_node->neighbors.push_back(clone_node(neighbor, visited));
        }

        return new_node;
    }
};
