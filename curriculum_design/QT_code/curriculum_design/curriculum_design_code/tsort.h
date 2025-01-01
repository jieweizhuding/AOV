#ifndef TSORT_H
#define TSORT_H

//自定义头文件
#include "my_graph.h"

//标准库
#include <queue>
#include <vector>
#include <string>


namespace AOV {

template<typename VertexInfo>
class Tsort{
    public:
        AOV::graph<VertexInfo> graph;
        bool h=false;


        Tsort(AOV::graph<VertexInfo> &g){
            graph.get_m()=g.get_m();
        }

        std::vector<std::string> topologicalSortKahn(AOV::graph<VertexInfo> &graph,bool &h) {
            std::unordered_map<std::string, int> inDegree; // 入度计数
            std::queue<std::string> zeroInDegree;         // 入度为 0 的节点队列
            std::vector<std::string> topoOrder;           // 存储拓扑排序结果

            // 初始化入度表
            for (auto &[uuid, node] : graph.get_m()) {
                inDegree[uuid] = 0;
            }
            for (auto &[uuid, node] : graph.get_m()) {
                arc_node *arc = node.get_out();
                while (arc) {
                    inDegree[arc->get_hind()]++;
                    arc = arc->get_tlink();
                }
            }

            // 将入度为 0 的节点加入队列
            for (auto &[uuid, degree] : inDegree) {
                if (degree == 0) {
                    zeroInDegree.push(uuid);
                }
            }

            // 开始排序
            while (!zeroInDegree.empty()) {
                std::string current = zeroInDegree.front();
                zeroInDegree.pop();
                topoOrder.push_back(current);

                arc_node *arc = graph.get_m()[current].get_out();
                while (arc) {
                    inDegree[arc->get_hind()]--;
                    if (inDegree[arc->get_hind()] == 0) {
                        zeroInDegree.push(arc->get_hind());
                    }
                    arc = arc->get_tlink();
                }
            }

            // 检查是否存在环
            if (topoOrder.size() != graph.get_m().size()) {
                h=true;
            }

            return topoOrder;
        }





        void dfs(const std::string &nodeId, AOV::graph<VertexInfo> &graph,
                 std::unordered_map<std::string, bool> &visited, std::vector<std::string> &topoOrder) {
            visited[nodeId] = true;

            arc_node *arc = graph.nodes[nodeId].first_out;
            while (arc) {
                if (!visited[arc->get_hind()]) {
                    dfs(arc->get_hind(), graph, visited, topoOrder);
                }
                arc = arc->get_tlink();
            }

            topoOrder.push_back(nodeId); // 后序添加到结果中
        }


        std::vector<std::string> topologicalSortDFS(AOV::graph<VertexInfo> &graph) {
            std::unordered_map<std::string, bool> visited; // 标记是否访问过
            std::vector<std::string> topoOrder;            // 存储拓扑排序结果

            // 初始化访问状态
            for (auto &[uuid, node] : graph.nodes) {
                visited[uuid] = false;
            }

            // 对每个未访问的节点执行 DFS
            for (auto &[uuid, node] : graph.nodes) {
                if (!visited[uuid]) {
                    dfs(uuid, graph, visited, topoOrder);
                }
            }

            std::reverse(topoOrder.begin(), topoOrder.end()); // 逆序即为拓扑排序结果
            return topoOrder;
        }
    };
}




#endif // TSORT_H
