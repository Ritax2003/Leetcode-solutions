class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
         while (edges[node1] >= 0 || edges[node2] >= 0) {
            int temp;
            if (edges[node1] >= 0) {
                temp = node1;
                node1 = edges[node1];
                edges[temp] = -3;
            }
            if (edges[node2] >= 0) {
                temp = node2;
                node2 = edges[node2];
                edges[temp] = -2;
            }
            if (edges[node1] == -2 && edges[node2] == -3) return min(node1, node2);
            if (edges[node1] == -2) return node1;
            if (edges[node2] == -3) return node2;
        }
        return node1 == node2 ? node1 : -1;
    }
};